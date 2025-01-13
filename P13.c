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
        for(int j=0;j<n;j++)
        {
            flag = 1;
            if(i!=j && arr[i]==arr[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            sum+=arr[i];
        }
    }
    printf("Sum of non-repeated elements is %d",sum);
    return 0;
}
