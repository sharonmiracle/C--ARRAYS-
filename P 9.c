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
    printf("The array elements having its value equal to index value are : ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]==i)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}
