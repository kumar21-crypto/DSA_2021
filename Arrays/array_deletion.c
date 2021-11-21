#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int index_Deletion(int arr[], int capacity, int size, int index)
{
    if (index > capacity)
    {
        return -1;
    }
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[50] = {1, 2, 3, 4, 5, 6};

    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 6;

    printf("before deletion\n");
    display(arr, size);

    index_Deletion(arr, 50, 6, 3);

    size = size - 1;
    printf("after deletion\n");
    display(arr, size);

    return 0;
}