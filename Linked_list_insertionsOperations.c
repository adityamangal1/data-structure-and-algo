#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;
    struct node *next;
};

void displayList(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertionatfirst(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    head = ptr;

    return head;
}
struct node *insertionatlast(struct node *head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct node *insertionatindex(struct node *head, int data, int index)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
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

    printf("Before\n");
    displayList(head);
    printf("AFter\n");
    // head = insertionatfirst(head, 70);
    // head = insertionatlast(head, 90);
    head = insertionatindex(head, 89, 2);
    displayList(head);

    return 0;
}