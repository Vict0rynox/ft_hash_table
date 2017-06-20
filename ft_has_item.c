#include "ft_hash_table.h"

int ft_has_item(t_hash_table *hash_table, char *key)
{
	unsigned int id;

	id = ft_get_key_id(hash_table, key);
	return (!hash_table->buckets[id].is_free);
}
