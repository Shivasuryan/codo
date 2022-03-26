#include <stdio.h>

int main()
{
    printf("enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        int x=arr[i];
        arr[i]=arr[min];
        arr[min]=x;
    }
    printf("the sorted array is\n");
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;
}
