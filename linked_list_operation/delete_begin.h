#include <stdlib.h>

struct NODE *delete_begin(struct NODE *node)
{
    struct NODE *ptr = node;
    node = node->next;
    free(ptr);
    return node;
}