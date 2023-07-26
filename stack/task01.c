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
    else
    {
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
int finsert (int val)
{
    int i;
    if(top>=n-1)
    printf(" array is full.....\n");
    else if (top<0)
    {
        top++;
        a[top]=val;
    }
    else
    {
        top++;
        for(i=top;i>=0;i--)
        {
            a[i]=a[i-1];
        }
        a[0]=val;
    }
}
int fdelet()
{
    int c,i;
    c=a[0];
    if(top<0)
    printf("array is empty.....");
else
{
    for (i=0;i<top; i++)
    {
        a[i]=a[i+1];
    }
    a[top--]=c;
}

}
int main()
{
    int ch;
    printf("\n1.insert:");
    printf("\n2.delet:");
    printf("\n3.first insert:");
    printf("\n4.first delet:");
    printf("\n5.display:");
    printf("\n6.exit:");

    while (ch!=6)
    {
        printf(" enter your choise :");
        scanf("%d",&ch);
        switch (ch)
        {

        case 1:
        insert(10);
        insert(20);
        insert(30);
        break;

        case 2:
             delet();
        break;

        case 3:
             finsert(80);
        break;

        case 4:
             fdelet();
        break;
        
        case 5:
             display();
        break;

        case 6:
             printf("exit");
        break;
        default:

        printf(" enter you valid number");
        
      
        }
    };
    
}