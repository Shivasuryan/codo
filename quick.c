#include <stdio.h>

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

int partition(int array[], int low, int high)
{

  int pivot = array[high];

  int i = (low - 1);


  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {

      i++;
      int temp= array[i];
      array[i]=array[j];
      array[j]=temp;
    }
  }

 int temp=array[i+1];
 array[i+1]=array[high];
 array[high]=temp;

  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high)
{
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);

    quickSort(array, pi + 1, high);
  }

}
