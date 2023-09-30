#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *node)
{
    while (node != NULL)
    {
        printf("\t\t\tElement: %d\n", node->data);
        node = node->next;
    }
}

struct node *insert_first(struct node *head, int data)
{
    struct node *first = (struct node *)malloc(sizeof(struct node));
    first->data = data;
    first->next = head;
    return first;
}

struct node *insert_index(struct node *head, int data, int index)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    newNode->next = ptr->next;
    newNode->data = data;
    ptr->next = newNode;
    return head;
}

struct node *insert_last(struct node *head, int data)
{
    struct node *last_index = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    last_index->data = data;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = last_index;
    last_index->next = NULL;
    return head;
}

void insert_after_node(struct node *prev_node, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prev_node->next;
    prev_node->next = ptr;
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));

    head->data = 101;
    head->next = first;

    first->next = second;
    first->data = 102;

    second->next = NULL;
    second->data = 103;

    printf("*****In the beginning of the any kind of operation*****\n");
    traverse(head);
    printf("*****Insert an element to the first position*****\n");
    head = insert_first(head, 104);
    traverse(head);
    printf("*****Insert an element to the specific index*****\n");
    head = insert_index(head, 105, 1);
    traverse(head);
    printf("*****Insert an element to the last index*****\n");
    head = insert_last(head, 106);
    traverse(head);
    printf("*****Insert after a given node*****\n");
    insert_after_node(first, 107);
    traverse(head);
}