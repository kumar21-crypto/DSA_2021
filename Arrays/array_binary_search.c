#include <stdio.h>

int binary_search(int arr[], int size, int element)
{
    int low, mid, high;

    low = 0;
    high = size-1;

    mid = (low + high) / 2;

    while (low <= high)
    {

        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 7, 8, 45, 67, 89, 123, 345, 556};
    int size = 11;

    printf("the element index in array is %d\n",binary_search(arr, size, 67));

    return 0;
}