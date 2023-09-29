#include <stdlib.h>
void insert_between(struct NODE *node, int data, int index)
{
    struct NODE *new_node = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *head = node;
    int i = 0;
    while (i != index - 1)
    {
        head = head->next;
        i++;
    }
    new_node->next = head->next;
    new_node->data = data;
    head->next = new_node;
}