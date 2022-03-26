#include <stdio.h>
void quickSort(int arr[], int l, int h)
{
   int i, j, pivot, temp;

   if(l<h)
   {
      pivot=l;
      i=l;
      j=h;

      while(i<j)
      {
         while(arr[i]<=arr[pivot]&&i<h)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j)
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quickSort(arr,l,pivot);
      quickSort(arr,pivot+1,h);

   }
}

int main()
{
    printf("enter the size of array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    quickSort(arr, 0, n - 1);

    printf("the sorted array is\n");
    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
    return 0;

}
