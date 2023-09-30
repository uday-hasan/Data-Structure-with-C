#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include "traverse.h"
#include "delete_begin.h"
#include "delete_index.h"
#include "delete_end.h"

int main()
{
    struct NODE *initial = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *first = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *second = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *third = (struct NODE *)malloc(sizeof(struct NODE));
    struct NODE *forth = (struct NODE *)malloc(sizeof(struct NODE));

    initial->data = 10;
    initial->next = first;
    first->data = 11;
    first->next = second;
    second->data = 12;
    second->next = third;
    third->data = 13;
    third->next = forth;
    forth->data = 14;
    forth->next = NULL;

    printf("Before any delete operation\n");
    display_linked_list(initial);

    printf("Delete initial node\n");
    initial = delete_begin(initial);
    display_linked_list(initial);

    printf("Delete specific index node\n");
    initial = delete_index(initial, 2);
    display_linked_list(initial);

    printf("Delete end node\n");
    initial = delete_end(initial);
    display_linked_list(initial);

    return 0;
}