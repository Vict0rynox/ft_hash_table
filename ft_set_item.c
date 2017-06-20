#include "ft_hash_table.h"

int	ft_set_item(t_hash_table *hash_table, char *key, void *data)
{
	unsigned int id;

	//TODO: add resize of hash_table
	if(hash_table->busy_cells == hash_table->size)
		return (-1);
	id = ft_get_key_id(hash_table, key);
	hash_table->buckets[id].data = data;
	hash_table->buckets[id].is_free = 0;
	return (0);
}
