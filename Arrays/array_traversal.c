#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main()
{
    int arr[50] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    display(arr,6);

    return 0;
}