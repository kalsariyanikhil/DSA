#include<stdio.h>
#define n 5
int a[n],top=-1;
void display()
{
    int i;
    for(i=0;i<=top;i++)
    printf("%d",a[i]);
}
int insert (int val)
{
    if(top>=n-1)
    printf(" array is full.....\n");
    else{
        top++;
        a[top]=val;
    }
}
int delet()
{
    if(top<0)
    printf("array is empty.....");

else
{
    top--;
}

}
int main()
{
    int ch;
    printf("\n1.insert:");
    printf("\n2.delet:");
    printf("\n3.display:");
    printf("\n4.exit:");

    while (ch!=4)
    {
        printf(" enter your choise :");
        scanf("%d",&ch);
        switch (ch)
        {

        case 1:
        insert(10);
        insert(20);
        insert(30);
        insert(40);
        insert(50);
        insert(60);
        break;

        case 2:
             delet();
        break;

        case 3:
             display();
        break;

        case 4:
             printf("exit :");
        break;
        default:

        printf(" enter you valid number");
        
      
        }
    };
    
}