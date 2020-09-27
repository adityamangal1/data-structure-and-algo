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
//   insertion in array
int insertion(int arr[], int size, int element, int index, int capacity)
{

    if (size >= capacity)
    {

        return -1;
    }

    for (int i = size - 1; i >= index; i--)
    {

        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{

    int arr[100] = {1, 2, 5, 7, 9, 12, 15};
    int size = 7, element = 45, index = 2;
    display(arr, size);
    insertion(arr, size, element, index, 100);
    size += 1;
    display(arr, size);

    return 0;
}