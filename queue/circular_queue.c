#include<stdio.h>
#define n 5
int f=-1,r=-1;
int a[n];

int display(){
     int i,f;
    if (f<0)
    {
        printf(" queue is empty.....\n");
    }
    else{
    do{
        printf("%d ",a[i]);
        i=(i+1)%n;
    }while (i<r);
         printf("%d ",a[i]);
    }   
}
int insertend(int val)
{
    if(r<0)
    {
        f = r = 0;
        a[r]=val;
    }
    else if((r+1)%n==f)
        printf(" queue is full.....");
    else {   
    r=(r+1)%n;
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
        f=(f+1)%n;
    } 
}

int main()
{
    {
    int ch,m;
    printf("\n [1] - insert:");
    printf("\n [2] - delet:");
    printf("\n [3] - display:");
    printf("\n [4] - exit:");

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