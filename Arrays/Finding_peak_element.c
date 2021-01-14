#include <stdio.h>

int findPeakUtil(int arr[], int low, int high, int n)
{
    int mid = (high + low) / 2;

    // Finding element with the help of neighbours
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid = n - 1 || arr[mid + 1] <= arr[mid]))
    {
        return mid;
    }
    // if greater than element then it must be in left side then

    else if (mid > 0 && arr[mid - 1] > arr[mid])
    {
        return findPeakUtil(arr, low, (mid - 1), n);
    }
    // else in right side

    else
    {
        return findPeakUtil(arr, (mid + 1), high, n);
    }
}

int PeakFunction(int arr[], int n)
{
    return findPeakUtil(arr, 0, n - 1, n);
}

int main()
{
    int arr[] = {3, 4, 5, 6, 6, 77, 79};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = PeakFunction(arr, size);
    printf("%d", result);

    return 0;
}