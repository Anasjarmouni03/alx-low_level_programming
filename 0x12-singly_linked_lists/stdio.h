#ifndef STDIO_H
#define STDIO_H
#include <stdio.h>
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);
void first(void) __attribute__ ((constructor));
#endif
