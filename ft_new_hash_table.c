#include "ft_hash_table.h"

t_hash_table	*ft_new_hash_table(unsigned int size)
{
	t_hash_table *hash_table;
	int i;

	if(size == 0)
		size = DEFAULT_CELL_COUNT;
	//TODO: Check that the size is a prime number. Otherwise, find the nearest.
	hash_table = (t_hash_table *)malloc(sizeof(t_hash_table));
	if(hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->busy_cells = 0;
	hash_table->buckets = malloc(sizeof(t_entries) * hash_table->size);
	if(hash_table->buckets == NULL)
		return (NULL);
	hash_table->key_id_hashes = malloc(sizeof(unsigned int) * hash_table->size);
	if(hash_table->key_id_hashes == NULL)
		return (NULL);
	i = 0;
	while(i < hash_table->size)
	{
		hash_table->buckets[i].is_free = 1;
		hash_table->buckets[i].data = NULL;
		hash_table->buckets[i].key = NULL;
		hash_table->key_id_hashes[i] = WORD_IDX_BAD;
		i++;
	}
	return (hash_table);
}