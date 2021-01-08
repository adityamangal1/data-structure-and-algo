#include <stdio.h>
int printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else
        {
            printf("%d", arr2[j++]);
            i++;
        }
    }
}
int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 4, 7};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printIntersection(arr1, arr2, m, n);
    getchar();

    return 0;
}