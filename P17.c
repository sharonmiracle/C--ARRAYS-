#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    int flag;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        flag = 0;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                sum+=arr[i];
                break;
            }
        }
    }
    printf("Sum of repeated elements is %d",sum);
    return 0;
}
