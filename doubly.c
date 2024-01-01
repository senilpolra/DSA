#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return;
}

void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("list is alredey empty....");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != NULL)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = NULL;
        ptr->prev = NULL;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        head->prev = temp;
        head = temp;
    }
}

void deletefirst()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty...");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        head = ptr->next;
        head->prev = NULL;
        ptr->next = NULL;
        ptr->prev = NULL;
        free(ptr);
    }
}

void insertmid(int val, int position)
{
    struct node *ptr = head, *p;
    struct node *temp = malloc(sizeof(struct node));
    int i = 1;

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (i < position)
    {
        i++;
        p = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr;
    temp->prev = p;
    p->next = temp;
    ptr->prev = temp;
    return;
}

void deletmid(int pos)
{
    struct node *ptr = head;
    struct node *prev;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    ptr->next->prev = prev;
    ptr->next = NULL;
    ptr->prev = NULL;
    free(ptr);
    return;
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("\nlist is empty...");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}

int main()
{
    insertend(100);
    insertend(200);
    insertend(300);
    insertend(400);
    insertend(500);
    insertend(600);

    insertfirst(50);
    deletefirst();
    insertmid(700, 2);
    deletmid(300);

    display();
}