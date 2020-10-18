#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void display(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *first;
    struct node *secound;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    secound = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = first;

    first->data = 50;
    first->next = secound;

    secound->data = 60;
    secound->next = third;

    third->data = 80;
    third->next = NULL;

    display(head);

    return 0;
}