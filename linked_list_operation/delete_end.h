#include <stdlib.h>

struct NODE *delete_end(struct NODE *node)
{
    struct NODE *p = node;
    struct NODE *q = node->next;
    int i = 0;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return node;
}