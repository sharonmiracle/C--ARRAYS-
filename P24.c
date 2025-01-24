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
        int flag=0;
        if(arr[i]<=1)
        {
            flag=0;
        }
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            sum+=arr[i];
        }
    }
    printf("The sum of Non Prime Numbers is : %d",sum);
    return 0;
}
