#include "ft_hash_table.h"

unsigned int	ft_get_key_id(t_hash_table *hash_table, char *key)
{
	unsigned int hash1;
	unsigned int hash2;
	unsigned char *ptr_key;

	if(key == NULL)
		return WORD_IDX_BAD;
	hash1 = 0;
	hash2 = 0;
	ptr_key = (unsigned char *) key;
	while (*ptr_key != '\0')
	{
		hash1 = (hash1 * STRIDE_1) + (STRIDE_2 * *ptr_key);
		hash2 = (hash2 * STRIDE_2) + (STRIDE_1 * *ptr_key);
		ptr_key++;
	}
	hash1 %= hash_table->size;
	hash2 = ((hash2 % (hash_table->size - 1)) + 1);
	while (hash_table->key_id_hashes[hash1] != WORD_IDX_BAD) {
		if(!ft_strcmp(key, hash_table->buckets[hash_table->key_id_hashes[hash1]].key))
			return hash_table->key_id_hashes[hash1];
		hash1 = ((hash1 + hash2) % hash_table->size);
	}
	hash_table->key_id_hashes[hash1] = hash_table->busy_cells;
	hash_table->buckets[hash_table->key_id_hashes[hash1]].key = ft_strdup(key);
	return hash_table->busy_cells++;
}
