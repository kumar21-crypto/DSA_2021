#include <stdio.h>

int linear_search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {
        2,
        6,
        1,
        34,
        5,
        6,
        7,
        8,
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    printf("the element is presented in index %d \n", linear_search(arr, size, 34));

    return 0;
}