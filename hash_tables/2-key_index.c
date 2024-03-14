#include "hash_tables.h"
/**
 * key_index- get the index of a key
 * @key: the key linked to the value
 * @size: the size of the table
 * Return: returns the int of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
   return (hash_djb2(key) % size); 
}
