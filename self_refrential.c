#include<stdio.h>

struct node{
    int data;
    char ch;
    struct node *ptr;
    
};

int main(){

    struct node a,b,c,d,e,f;
    a.data = 10;
    a.ch = 'A';
    a.ptr = NULL;

    b.data = 20;
    b.ch = 'B';
    b.ptr = NULL;

    c.data = 30;
    c.ch = 'C';
    c.ptr = NULL;

    d.data = 40;
    d.ch = 'D';
    d.ptr = NULL;

    e.data = 50;
    e.ch = 'E';
    e.ptr = NULL;

    f.data = 60;
    f.ch = 'F';
    f.ptr = NULL;


    a.ptr = &b;
    printf("B : data: %d, ch: %c",a.ptr -> data , a.ptr ->ch);

    b.ptr = &a;
    printf("\nA : data: %d, ch: %c",b.ptr -> data , b.ptr ->ch);

    c.ptr = &d;
    printf("\nD : data: %d, ch: %c",c.ptr -> data , c.ptr ->ch);

    d.ptr = &c;
    printf("\nC : data: %d, ch: %c",d.ptr -> data , d.ptr ->ch);

    e.ptr = &f;
    printf("\nf : data: %d, ch: %c",e.ptr -> data , e.ptr ->ch);

    f.ptr = &e;
    printf("\nE : data: %d, ch: %c",f.ptr -> data , f.ptr ->ch);
    
}