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

    if (head == NULL)
    {
        head = temp;
        temp->next = head;
        temp->prev = head;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = head;
        temp->prev = ptr;
        head->prev = temp;
    }
    return;
}

void deleteEnd()
{
    struct node *ptr = head, *p;
    if (head == NULL)
    {
        printf("list is alredey empty....");
    }
    else if (head->next == head)
    {
        head = NULL;
        free(ptr);
    }
    else
    {
        while (ptr->next != head)
        {
            p = ptr;
            ptr = ptr->next;
        }
        p->next = head;
        head->prev = p;
        free(ptr);
    }
    return;
}

void insertfirst(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    if (head == NULL)
    {
        head = temp;
        temp->next = temp;
        temp->prev = temp;
        return;
    }
    else
    {
        while (ptr->next != head)

            ptr = ptr->next;

        ptr->next = temp;
        temp->prev = ptr;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return;
}

void deletefirst()
{
    if (head == NULL)
    {
        printf("list is alredey empty....");
        return;
    }
    struct node *p = head;
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    if (ptr == head)
    {
        head == NULL;
    }
    else
    {
        head = head->next;
        ptr->next = head;
        head->prev = ptr;
    }

    free(p);
}

void insertmid(int val, int position)
{
    struct node *ptr = head, *p;
    struct node *temp = malloc(sizeof(struct node));
    int i = 0;

    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;

    while (i < position)
    {
        i++;
        p = ptr;
        ptr = ptr->next;
    }
    p->next = temp;
    temp->next = ptr;
    temp->prev = p;
    ptr->prev = temp;
    return;
}

void deletemid(int pos)
{
    struct node *ptr = head, *prev, *p;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }
    prev->next = ptr->next;
    ptr->next->prev = prev;
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
        do
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        } while (ptr != head);
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
    deleteEnd();
    insertfirst(50);
   deletefirst();
   insertmid(599, 2);
   deletemid(300);

    display();
}