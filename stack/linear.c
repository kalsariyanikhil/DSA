#include <stdio.h>
#include<stdlib.h>
int main()
{
  int a[5]={10,20,30,40,50},i=0,item;


  printf("Enter a number to search :");
  scanf("%d",&item);

  while (i<5)
  {
    if(a[i]==item)
  
  {
    printf(" is present at location %d",i+1);
    break;
  }
  i++;
}
    if (i>=5)  
    
      printf("item not found");
    
}
  
