#include<stdio.h>
int main()
{
    int n;
    int count=0;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        count++;
    }
    printf("The count of the array elements is %d",count);
    return 0;
}
