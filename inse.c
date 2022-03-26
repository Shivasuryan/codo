#include <stdio.h>

int main()
{
    printf("enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);


    for (int i = 1; i < n; i++)
    {
        int j,key;
        key = arr[i];
        j = i - 1;

        while ( j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


    int i;
    printf("sorted array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
        return 0;

}
