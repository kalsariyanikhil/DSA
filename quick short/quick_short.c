#include<stdio.h>
#include<stdlib.h>
int n;

void print(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    printf(" \t %d",a[i]);
}
void quickshort(int a[],int first,int last)
{
    int i,j,temp,pivot;
    if(first<last)
    {
        print(a);
        pivot=first;
        i=first;j=last;
        while (i<j)
        {
        while(a[i]<=a[pivot]&&i<last)
            i++;
        while(a[j]>a[pivot])
            j--;
        if(i<j){
           temp=a[i];
           a[i]=a[j];
           a[i]=temp;
        }
    
           temp=a[pivot];
           a[pivot]=a[j];
           a[j]=temp;
    quickshort(a,first,j-1);//lest side
    quickshort(a,j+1,last);//right side
        }
    }
}
int main()
{
    int a[25],i;

    printf(" How many elements enter :");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    a[i]=rand()%100+1;

    quickshort(a,0,n-1);
    printf(" \n After quick short :");
    print(a);

}
