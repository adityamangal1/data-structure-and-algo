#include <bits/stdc++.h>

using namespace std;

void common_sum(bool arr1[], bool arr2[], int n)
{
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;

        for (int j = i; i < n; j++)
        {
            sum1 += arr1[j];
            sum2 += arr2[j];

            if (sum1 == sum2)
            {

                int len = j - i + 1;
                if (len > maxLen)

                    maxLen = len;
            }
        }
    }
    // return maxLen;
    cout << maxLen;
}

int main()
{
    bool arr3[] = {0, 1, 0, 1, 1, 1, 1};
    bool arr4[] = {1, 1, 1, 1, 1, 0, 1};
    int n = 7;
    // int result = common_sum(arr3, arr4, 7);

    common_sum(arr3, arr4, 7);

    return 0;
}