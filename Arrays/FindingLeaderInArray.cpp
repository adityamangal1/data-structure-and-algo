#include <iostream>

using namespace std;
void Finding_Leader(int arr1[], int size)
{
    int max_from_right = arr1[size - 1];
    cout << max_from_right << " "; // right most element is always leader
    for (int i = size - 2; i >= 0; i--)
    {
        if (max_from_right < arr1[i])
        {
            max_from_right = arr1[i];
            cout << max_from_right << " ";
        }
    }
}

int main()
{
    int arr1[] = {16, 17, 4, 3, 5, 2};   // array input
    int size = sizeof(arr1) / sizeof(arr1[0]);
    Finding_Leader(arr1, size);

    return 0;
}
