#include<stdio.h>
int main()
{
    int n;
    int x;
    int count=0;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of x : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            count+=1;
        }
    }
    printf("The count of smaller elements is %d",count);
    return 0;
}
