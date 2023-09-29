#include <stdio.h>
#include <stdlib.h>
#include "structure.h"
#include "traverse.h"
#include "insert_begin.h"
#include "insert_between.h"
#include "insert_end.h"

int main()
{
    struct NODE *head;
    struct NODE *first;
    struct NODE *second;

    head = (struct NODE *)malloc(sizeof(struct NODE));
    first = (struct NODE *)malloc(sizeof(struct NODE));
    second = (struct NODE *)malloc(sizeof(struct NODE));

    head->data = 10;
    head->next = first;

    first->data = 15;
    first->next = second;

    second->data = 20;
    second->next = NULL;
    printf("*****BEFORE ANY OPERATION*****\n");
    printf("***************\n");
    display_linked_list(head);
    printf("***************\n");
    printf("*****INSERT AT THE BEGINNING*****\n");
    printf("***************\n");
    head = insert_begin(head, 23);
    display_linked_list(head);
    printf("***************\n");
    printf("*****INSERT AT THE SPECIFIC INDEX*****\n");
    printf("***************\n");
    insert_between(head, 31, 2);
    display_linked_list(head);
    printf("***************\n");
    printf("*****INSERT AT THE END*****\n");
    printf("***************\n");
    insert_end(head, 39);
    display_linked_list(head);
    printf("***************\n");

    return 0;
}