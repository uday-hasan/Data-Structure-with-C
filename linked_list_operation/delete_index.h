#include <stdlib.h>

struct NODE *delete_index(struct NODE *node, int index)
{
    struct NODE *ptr = node;
    struct NODE *p = node->next;

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    free(p);
    return node;
}