#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The alternate array elements are : ");
    for(int i=0;i<n;i+=2)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
