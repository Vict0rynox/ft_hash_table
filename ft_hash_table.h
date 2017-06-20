#ifndef FT_MEMCACHED_LIBRARY_H
#define FT_MEMCACHED_LIBRARY_H

#include <stdlib.h>
#include <libft.h>
#include <ntsid.h>
#include <stddef.h>
#define WORD_IDX_BAD (( unsigned int )-1)

#ifndef DEFAULT_CELL_COUNT
#define DEFAULT_CELL_COUNT 30011
#endif

#ifndef STRIDE_1
#define STRIDE_1 17
#endif

#ifndef STRIDE_2
#define STRIDE_2 13
#endif

typedef struct s_entries t_entries;
typedef struct s_hash_table t_hash_table;

struct s_entries
{
	char *key;
	void *data;
	char is_free;
};

struct s_hash_table
{
	unsigned int	size;
	unsigned int	busy_cells;
	unsigned int	*key_id_hashes;
	t_entries		*buckets;
};

int				ft_add_item(t_hash_table *hash_table, char *key, void *data);

void			*ft_get_item(t_hash_table *hash_table, char *key);

unsigned int	ft_get_key_id(t_hash_table *hash_table, char *key);

int				ft_has_item(t_hash_table *hash_table, char *key);

t_hash_table	*ft_new_hash_table(unsigned int size);

int				ft_set_item(t_hash_table *hash_table, char *key, void *data);

int				ft_del_item(t_hash_table *hash_table, char *key);

#endif