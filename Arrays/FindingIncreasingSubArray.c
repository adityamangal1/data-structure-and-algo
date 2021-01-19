#include <stdio.h>

int IncreasingArray(int arr[], int n)
{

    int count = 0;
    for (int i = 0; i < n; i++)

    {
        for (int j = i + 1; j < n; j++)

        {
            if (arr[j] > arr[j - 1])
            {
                count++;
            }

            else
            {
                break;
            }
        }
    }
    return count;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 1, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = IncreasingArray(arr, size);
    printf("The count of the increasing sub arrays are %d", result);

    return 0;
}