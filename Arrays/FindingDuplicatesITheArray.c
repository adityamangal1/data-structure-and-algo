#include <stdio.h>
#include <stdlib.h> // For using abs function

void FindDuplicate(int arr[], int size)
{
    printf("The duplicate elements in the array are");
    for (int i = 0; i < size; i++)
    {
        if (arr[abs(arr[i])] >= 0)
            arr[abs(arr[i])] = -arr[abs(arr[i])];

        else
            printf(" %d ", abs(arr[i]));
    }
}

int main()
{
    int arr[] = {1, 2, 2, 5, 6, 7, 6};
    int size = 7;
    FindDuplicate(arr, size);

    return 0;
}

// O(n) Time complexity
