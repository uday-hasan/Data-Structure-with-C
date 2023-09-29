#include <stdlib.h>
// #include "structure.h"
// struct NODE
// {
//     int data;
//     struct NODE *next;
// };

struct NODE *insert_begin(struct NODE *head, int data)
{
    struct NODE *newHead = (struct NODE *)malloc(sizeof(struct NODE));
    newHead->data = data;
    newHead->next = head;
    return newHead;
}