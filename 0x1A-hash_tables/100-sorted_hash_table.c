#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = calloc(size, sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value to associate with the key
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *prev, *current;

    if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
        return (0);

    index = key_index((unsigned char *)key, ht->size);

    current = ht->shead;
    prev = NULL;

    while (current && strcmp(current->key, key) < 0)
    {
        prev = current;
        current = current->snext;
    }

    if (current && strcmp(current->key, key) == 0)
    {
        free(current->value);
        current->value = strdup(value);
        return (1);
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    if (prev)
        prev->snext = new_node;
    else
        ht->shead = new_node;

    new_node->sprev = prev;
    new_node->snext = current;
    if (current)
        current->sprev = new_node;
    else
        ht->stail = new_node;

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *node;

    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    for (node = ht->shead; node != NULL; node = node->snext)
    {
        if (first)
            first = 0;
        else
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");
    for (node = ht->stail; node != NULL; node = node->sprev)
    {
        if (first)
            first = 0;
        else
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *temp;

    if (ht == NULL)
        return;

    for (node = ht->shead; node != NULL;)
    {
        temp = node->snext;
        free(node->key);
        free(node->value);
        free(node);
        node = temp;
    }

    free(ht->array);
    free(ht);
}
