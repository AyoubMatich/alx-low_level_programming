#ifndef LISTS_H_
#define LISTS_H_

#include "stddef.h"  // Include for size_t, which is used in the function declarations

/* Define the structure for a singly linked list node */
typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
void first(void);

#endif
