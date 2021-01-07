#include <stdio.h>
int Missing_element(int arr1[], int n)
{
    int x1 = arr1[0];
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ arr1[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}

int main()
{
    int arr1[] = {1, 3, 4, 5, 6};
    int result = Missing_element(arr1, 5);
    printf("%d", result);
}

// Big O(n) time complexity