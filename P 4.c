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
    int rot;
    printf("Enter no. of rotations : ");
    scanf("%d",&rot);
    for(int i=0;i<rot;i++)
    {
        int temp=arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    printf("Array after rotation : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
