#include <stdio.h>
#include <stdlib.h>

int display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }
    printf("\n");
}

// int arr[1, 23, 45, 56, 67, 7]

void deletion(int arr[], int index, int size)
{

    for (int i = index; i <= size; i++)
    {

        arr[i] = arr[i + 1];
    }
    // return 1;
}
int main()
{

    int arr[100] = {1, 2, 5, 7, 9, 12, 15};
    int size = 7, element = 45, index = 2;
    display(arr, size);
    deletion(arr, index, size);
    size -= 1;
    display(arr, size);

    return 0;
}