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
    printf("The Prime Numbers are : ");
    for(int i=0;i<n;i++)
    {
        int flag=1;
        if(arr[i]<=1)
        {
            flag=0;
        }
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
