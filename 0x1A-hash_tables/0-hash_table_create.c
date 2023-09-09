#include <stdlib.h>

typedef struct {
    unsigned long int size;
    /* Other fields of the hash table */
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size) {
    hash_table_t *hash_table = malloc(sizeof(hash_table_t));
    
    if (hash_table == NULL) {
        return NULL; /* Return NULL if memory allocation failed */
    }
    
    hash_table->size = size;
    
    /* Initialize other fields of the hash table */
    
    return hash_table;
}
