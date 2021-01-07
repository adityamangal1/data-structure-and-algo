// usign XOR method

#include <stdio.h>
#include <limits.h> // for using INT_MAX
#include <stdlib.h> // for usign abs() which gives the absoulute value

int MinimumDistance(int arr[], int m, int x, int y)
{
    int min = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; i < m; i++)
        {
            if ((x == arr[i] && y == arr[j] || y == arr[i] && x == arr[j]) && min > abs(i - j))
            {
                min = abs(i - j);
                // printf("%d", abs(i = j));
            }
        }
    }
    return min;
}

int main()
{
    int arr1[] = {1, 2, 5, 7, 8, 9, 4, 6};
    int m = sizeof(arr1) / sizeof(arr1[0]);      // size of array 1
    int result = MinimumDistance(arr1, m, 2, 5); // fucntion called
    printf("Missing element from array is %d. ", result);
    getchar();

    return 0;
}