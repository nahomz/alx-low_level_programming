# 0x1A. C - Hash Tables
This directory covers various ways of implementing Hash Table data structures in C.

## Intro.
The hash table is a data structure, that uses keys and values to store data. The data structures used in this project are:

/**
   * struct hash_node_s - Node of a hash table
    *
     * @key: The key, string
      * The key is unique in the HashTable
       * @value: The value corresponding to a key
        * @next: A pointer to the next node of the List
	 */
typedef struct hash_node_s
{
	     char *key;
	          char *value;
		       struct hash_node_s *next;
} hash_node_t;


/**
   * struct hash_table_s - Hash table data structure
    *
     * @size: The size of the array
      * @array: An array of size @size
       * Each cell of this array is a pointer to the first node of a linked list,
        * because we want our HashTable to use a Chaining collision handling
	 */
typedef struct hash_table_s
{
	     unsigned long int size;
	          hash_node_t **array;
} hash_table_t;


## Files.
All files are compiled using gcc 4.8.4 as follows -Wall -Wextra -Werror -pedantic and are checked to comply with the Betty Style guide.

### [0-hash_table_create.c](./0-hash_table_create.c)
Write a function that creates a hash table.

### [1-djb2.c](./1-djb2.c)
Write a hash function implementing the djb2 algorithm.

### [2-key_index.c](./2-key_index.c)
A function that gives you the index of a key.

### [3-hash_table_set.c](./3-hash_table_set.c)
A function that adds an element to the hash table.

### [4-hash_table_get.c](./4-hash_table_get.c)
A function that retrieves a value associated with a key.

### [5-hash_table_print.c](./5-hash_table_print.c)
A function that prints a hash table.

### [6-hash_table_delete.c](./6-hash_table_delete.c)
A function that deletes a hash table.
