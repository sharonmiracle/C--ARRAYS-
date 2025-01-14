#include<stdio.h>
int main()
{
    int n;
    int elem;
    int loc;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element : ");
    scanf("%d",&elem);
    printf("Enter the location : ");
    scanf("%d",&loc);
    
    for(int ind=n;ind>loc-1;ind--)
    {
        arr[ind]=arr[ind-1];
    }
    arr[loc-1]=elem;
    
    printf("The array elements after insertion is ");
    for(int i=0;i<n+1;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
