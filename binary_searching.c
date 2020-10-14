#include <stdio.h>

int binarysearch(int arr[], int element, int size)
{
    int low = 0, high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (element == arr[mid])
        {

            return mid;
        }
        else if (element > arr[mid])
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

    int arr[50] = {1, 2, 4, 5, 66, 77};
    int element = 421321, size = 6;
    int search = binarysearch(arr, element, size);
    if (search == -1)
    {
        printf("Yur element %d was not found in the array\n", element);
    }
    else
    {
        printf("%d found at %d", element, search);
    }

    return 0;
}