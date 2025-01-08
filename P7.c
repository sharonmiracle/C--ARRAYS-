#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of the array elements is %d",sum);
    return 0;
}
