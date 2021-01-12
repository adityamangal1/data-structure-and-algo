#include <stdio.h>

int FixedElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == i)
        {
            return i;
        }
    }
    // printf("None fixed point");
    return -1;
}

int main()
{
    int arr[] = {0, 2, 6, 31, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int Fixed = FixedElement(arr, size);
    if (Fixed == -1)
    {
        printf("No any fixed point found in the array.");
    }
    else
    {

        printf("The Fixed element in the array is %d.", Fixed);
    }

    return 0;
}

// O(n) time complexity
// Based on Linear search algorithm