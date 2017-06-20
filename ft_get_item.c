#include "ft_hash_table.h"

void	*ft_get_item(t_hash_table *hash_table, char *key)
{
	unsigned int id;

	id = ft_get_key_id(hash_table, key);
	if(id != WORD_IDX_BAD && !hash_table->buckets[id].is_free) {
		return (hash_table->buckets[id].data);
	}
	return (NULL);
}
