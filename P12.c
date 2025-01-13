#include<stdio.h>
int main()
{
    int n;
    int even=0;
    int odd=0;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        else
        {
            odd+=arr[i];
        }
    }
    printf("The sum of even elements is %d",even);
    printf("\nThe sum of odd elements is %d",odd);
    return 0;
}
