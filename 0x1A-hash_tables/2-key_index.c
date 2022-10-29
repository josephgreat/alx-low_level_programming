#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key to be hashed
 * @size: size of array
 * Return: index at which key/value should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
