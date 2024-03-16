#include <stdlib.h>
#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table
 * or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/* Allocation memory for the hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/* Allocation memory for the array */
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/* Initializing all elements of the array to NULL */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	hash_table->size = size;

	return (hash_table);
}

/**
 * main - Entry point of the program
 *
 * Return: Always EXIT_SUCCESS(0)
 */
int main(void)
{
	hash_table_t *hash_table;

	hash_table = hash_table_create(1024);
	printf("%p\n", (void *)hash_table_create);
	return (EXIT_SUCCESS);
}
