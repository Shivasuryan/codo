#include<stdio.h>

int binary(int arr[], int l, int h, int target)
{

    if (l > h) {
        return -1;
    }

    int mid = (l + h)/2;
    if (target == arr[mid]) {
        return mid;
    }
    else if (target < arr[mid])
    {
        return binary(arr, l, mid - 1, target);
    }

    else
    {
        return binary(arr, mid + 1, h, target);
    }
}

int main(void)
{
    int arr[] = { 2, 5, 6, 8, 9, 10 };
    int target = 5;

    int n = sizeof(arr)/sizeof(arr[0]);

    int l = 0, h = n - 1;
    int index = binary(arr, l, h, target);

    if (index != -1) {
        printf("Element found at index %d", index);
    }
    else {
        printf("Element not found in the array");
    }

    return 0;
}
