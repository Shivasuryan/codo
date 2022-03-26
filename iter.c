#include <stdio.h>

int iterasearch(int arr[], int i, int j, int x)
{
   while (i <= j)
   {
      int mid = i + (j- i )/2;
      if (arr[mid] == x)
      {
         return mid;
      }
      if (arr[mid] < x)
      {
          i = mid + 1;
      }
      else
      {
         j = mid - 1;
      }
   }
   return -1;
}

int main(void)
{
   int arr[] = {1, 4, 7, 9, 16, 56, 70};
   int n = sizeof(arr)/sizeof(arr[0]);
   int x = 16;
   int index = iterasearch(arr, 0, n-1, x);
   if(index == -1 )
   {
      printf("Element not found in the array ");
   }
   else
   {
      printf("Element found at index : %d",index);
   }
   return 0;
}
