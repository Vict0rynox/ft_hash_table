#include <sys/time.h>
#include <uuid/uuid.h>
#include <libft.h>
#include <stdio.h>
#include "ft_hash_table.h"

int main()
{
	t_hash_table *hash_table;

	char **keys;
	keys = (char**)malloc(sizeof(char*) * DEFAULT_CELL_COUNT);
	hash_table = ft_new_hash_table(0);


	int is_ok = 1;
	for (unsigned int j = 0; j < DEFAULT_CELL_COUNT - 1; ++j)
	{
		uuid_t out;
		do{
			uuid_generate(out);
		}while(ft_has_item(hash_table, (char *) out));
		keys[j] = ft_strdup((const char *) out);
		if(ft_add_item(hash_table, (char *) out, keys[j])!= 0) {
			is_ok = 0;
			printf("Error when add [%s][%s]\n", out, keys[j]);
		}
		uuid_clear(out);
	}

	for (unsigned int j = 0; j < DEFAULT_CELL_COUNT; ++j)
	{
		char *value = ft_get_item(hash_table, keys[j]);
		if(ft_strcmp(value, keys[j]) != 0){
			is_ok = 0;
			printf("[%s] != [%s]\n", keys[j], value);
		}
	}
	if(is_ok) {
		printf("All test done\n");
	} else {
		printf("Test fail\n");
	}
}