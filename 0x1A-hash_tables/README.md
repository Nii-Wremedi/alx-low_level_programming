Hash Tables
This repository contains C implementations of hash tables, a data structure widely used in computer science for efficient data retrieval. Hash tables allow for the storage and retrieval of key-value pairs in constant time on average, making them a crucial component of many algorithms and data structures.

Requirements
Editors: vi, vim, emacs
Compilation: Ubuntu 20.04 LTS, gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
Files: All files should end with a new line.
Readme: A README.md file is mandatory at the root of the project.
Coding Style: Code should adhere to the Betty style, with checks using betty-style.pl and betty-doc.pl.
Global Variables: Global variables are not allowed.
Functions per File: No more than 5 functions per file.
C Standard Library: Allowed for this project.
Header File: Prototypes of functions should be included in the header file hash_tables.h.
Include Guards: All header files should have include guards.
Data Structures
This project uses the following data structures for hash tables:

c
Copy code
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
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
Tests
A set of tests is provided to verify the correct functionality of the implemented hash table. These tests can be found in the corresponding main files.

Tasks
Task 0: Create a Hash Table
Write a function hash_table_create that creates a hash table.

c
Copy code
hash_table_t *hash_table_create(unsigned long int size);
This function returns a pointer to the newly created hash table or NULL if an error occurs.

Task 1: Implement the djb2 Algorithm
Write a hash function implementing the djb2 algorithm.

c
Copy code
unsigned long int hash_djb2(const unsigned char *str);
Task 2: Get the Index of a Key
Write a function key_index that gives you the index of a key.

c
Copy code
unsigned long int key_index(const unsigned char *key, unsigned long int size);
Task 3: Add an Element to the Hash Table
Write a function hash_table_set that adds an element to the hash table.

c
Copy code
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
This function returns 1 if it succeeded, 0 otherwise.

Task 4: Retrieve a Value from the Hash Table
Write a function hash_table_get that retrieves a value associated with a key.

c
Copy code
char *hash_table_get(const hash_table_t *ht, const char *key);
This function returns the value associated with the element or NULL if the key couldn't be found.

Task 5: Print a Hash Table
Write a function hash_table_print that prints a hash table.

c
Copy code
void hash_table_print(const hash_table_t *ht);
If ht is NULL, it doesn't print anything.

Task 6: Delete a Hash Table
Write a function hash_table_delete that deletes a hash table.

c
Copy code
void hash_table_delete(hash_table_t *ht);
Task 7: Implement Sorted Hash Table
Write functions using a sorted hash table data structure with ordered elements.

c
Copy code
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
These functions provide additional functionality to create, set, get, print, and delete a sorted hash table.

Acknowledgments
This project is inspired by the principles of hash tables, a fundamental concept in computer science. It serves as an implementation in C with a focus on clarity and adherence to coding standards. Special thanks to the PHP Internals Book for the inspiration on implementing a sorted hash table.
