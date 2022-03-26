#include <stdio.h>

  void heapify(int arr[], int n, int i)
  {

    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;


    if (largest != i)
    {
      int temp= arr[i];
      arr[i]=arr[largest];
      arr[largest]= temp;
      //swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
  }


  void heapSort(int arr[], int n)
  {

    for (int i = n / 2 - 1; i >= 0; i--) // max
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        int temp= arr[0];
        arr[0]=arr[i];
        arr[i]=temp;
      //swap(&arr[0], &arr[i]);

      heapify(arr, i, 0);
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

    heapSort(arr, n);

    printf("Sorted array is \n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);

    return 0;
  }
