#include "ft_hash_table.h"

int	ft_del_item(t_hash_table *hash_table, char *key)
{
	unsigned int id;

	id = ft_get_key_id(hash_table, key);
	if(!hash_table->buckets[id].is_free) {
		hash_table->buckets[id].data = NULL;
		hash_table->buckets[id].is_free = 1;
		return (0);
	}
	return (-1);
}
