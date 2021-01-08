// By using XOR (a bitwise operator)

#include <iostream>
using namespace std;
int OddOcuurence(int arr[], int size)
{
    int res = 0;
    for (int i = 0; i < size; i++)

    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
    // int arr[] = {1, 2, 2, 3,3,4,55};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d is the odd occurnece in the array.", OddOcuurence(arr, size));

    return 0;
}