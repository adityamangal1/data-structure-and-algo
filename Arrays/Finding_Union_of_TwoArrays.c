#include <stdio.h>

int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            printf("%d", arr1[i++]);
        else if (arr2[j] < arr1[i])
            printf("%d", arr2[j++]);
        else
        {
            printf("%d", arr2[j++]);
            i++;
        }
    }
    while (i < m)
    {
        printf("%d", arr1[i++]);
    }
    while (j < n)
    {
        printf("%d", arr2[j++]);
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 6};
    int arr2[] = {9, 8, 3, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]); // size of array 1
    int n = sizeof(arr2) / sizeof(arr2[0]); // size of array 2
    // printf("%d", m);
    // printf("%d", n);
    printUnion(arr1, arr2, m, n); // fucntion called
    getchar();

    return 0;
}