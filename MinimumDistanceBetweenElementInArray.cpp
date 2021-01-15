#include <bits/stdc++.h>

using namespace std;

int FindingMinimum(int arr[], int size)
{

    // diff declares as infinte number
    int diff = INT_MAX;

    // sorting the array in ascending order
    sort(arr, arr + size);

    for (int i = 0; i < size; i++)

    {
        if (arr[i + 1] - arr[i] < diff)
        {

            diff = arr[i + 1] - arr[i];
        }
    }

    return diff;
}

int main()
{

    int arr[] = {1, 5, 3, 19, 18, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = FindingMinimum(arr, size);
    cout << "The Minimum distance is " << result << endl;

    return 0;
}