#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("the data is %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertFirst(struct node *ptr, int value)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = value;
    new_node->next = ptr;
    ptr = new_node;

    return ptr;
}

struct node *insertBetween(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index-1)
    {
        p = p->next;


        i++;
    }
        ptr->data = data;
        ptr->next = p->next;
        p->next = ptr;

        return head;

}

struct node * insertLast(struct node *head, int data)
{
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;

    while(p->next !=NULL)
    {
        p = p->next;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;

}

struct node * insertAfterNode(struct node *head, struct node *p, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

int main()
{
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;

    printf("linked list before\n");
    traversal(head);

    // head = insertFirst(head, 100);
    // head = insertBetween(head,200,2);
    // head = insertLast(head,300);
    head = insertAfterNode(head,second,400);

    printf("\n\n");
    printf("linked list after\n");
    traversal(head);

    return 0;
}