
#include<stdio.h>
int main()
{
    int arr1[10], arr2[10], n1, n2, i, k, merge[50];

    printf("Enter Array 1 Size: ");
    scanf("%d", &n1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &n2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    printf("\nThe new array after merging is:\n");
    for(i=0; i<k; i++)
    printf("%d ", merge[i]);
    
    
} 