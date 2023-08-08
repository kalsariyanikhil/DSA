#include<stdio.h>
struct  node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    struct  node x,y;
    x.ch ='A';
    x.data = 65;
    x.ptr =NULL;

    y.ch = 'B';
    y.data = 66;
    y.ptr = NULL;

    y.ptr=&x;
    x.ptr=&y;

    printf("X: data: %d \t ch :%c",y.ptr->data,y.ptr->ch);
    printf("\nY: data: %d \t ch :%c",x.ptr->data,x.ptr->ch); 
}
