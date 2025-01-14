#include<stdio.h>
int main()
{
    int n;
    int loc;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the location : ");
    scanf("%d",&loc);
    
    for(int ind=loc-1;ind<n;ind++)
    {
        arr[ind]=arr[ind+1];
    }
    
    printf("The array elements after deletion is ");
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
