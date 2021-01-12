#include <stdio.h>

int NextGreatest(int arr[], int size)
{
    int max_right = arr[size - 1];

    arr[size - 1] = -1;

    for (int i = size - 2; i >= 0; i--)
    {
        int temp = arr[i];

        arr[i] = max_right;

        if (max_right < temp)
        {

            max_right = temp;
        }
    }
}
void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    NextGreatest(arr, size);
    printf("Now the modified Array is\n");
    PrintArray(arr, size);

    return 0;
}