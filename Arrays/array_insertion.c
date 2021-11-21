#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int index_Insertion(int arr[], int capacity, int size, int index, int value)
{
    if (size >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];

        if (i == 3)
        {
            arr[i] = value;
        }
    }
}

int main()
{
    int arr[50] = {7, 22, 15, 3, 50, 6};

    int capacity = sizeof(arr) / sizeof(arr[0]);
    int size = 6;

    printf("before insertion\n");
    display(arr, size);

    index_Insertion(arr, capacity, 6, 3, 10);
    size+=1;

    printf("after insertion\n");
    display(arr, size);

    printf("size is %d\n",size);

    return 0;
}