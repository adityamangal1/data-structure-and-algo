// This could be done by moore's voting algorithm

#include <stdio.h>
#define bool int

int FindCandidate(int *, int);
bool IsMajority(int *, int, int);

void PrintMajorityElement(int arr1[], int size)
{
    int cand = FindCandidate(arr1, size);
    if (IsMajority(arr1, size, cand))
    {
        printf("%d", cand);
    }
    else
    {
        printf("No majority element found in the array");
    }
}

int FindCandidate(int arr[], int size)
{
    int max_Index = 0, count = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[max_Index] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            max_Index = i;
            count = 1;
        }
    }
    return arr[max_Index];
}

bool IsMajority(int arr[], int n, int cand)

{
    int count = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == cand)
            count++;
    if (count > n / 2)
        return 1;
    else
        return 0;
}

int main()
{
    int arr1[] = {1, 3, 3, 1, 2, 3};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    PrintMajorityElement(arr1, size);
    getchar();

    return 0;
}

// O(n) Time complexity