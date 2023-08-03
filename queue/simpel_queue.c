#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];

int display(){

    if (f < 0)
    {
        printf(" queue is empty\n");
    }
    else
    {
        for (int i = f; i <= r; i++)
    {
        printf("%d ",a[i]);
    }
         printf(" \n ");
    }
    
}

int insertend(int val)
{
    if(r>=n-1)
    printf(" queue is full \n");
    else if (r<0)
    {
        f = r = 0;
        a[r]=val;
    }
    else{
        r++;
        a[r]=val;
    }
}
int delet()
{
    if (f < 0)
    {
        printf(" queue is empty\n");
    }
    else if (f == r)
    {
        f = r =-1;
    }
    else{
        f++;
    } 
}
int main()
{
    {
    int ch,m;
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
        printf(" enter your choise :");
        scanf("%d",&m);
        insertend(m);
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

        printf(" enter your valid number");
        
      
         }
     };
   
  }
}