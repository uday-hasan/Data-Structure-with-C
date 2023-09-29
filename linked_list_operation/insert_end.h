#include <stdlib.h>
void insert_end(struct NODE *node, int data)
{
    struct NODE *last = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *ptr = node;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    last->data = data;
    last->next = NULL;
    ptr->next = last;
}