#include <stdio.h>

int Linearsearch(int arr[], int element, int size)
{

    for (int i = 0; i < size; i++)
    {

        if (arr[i] == element)
        {

            return i;
        }
    }
    return 1;
}

int main()
{

    int arr[50] = {1, 3, 4, 78, 56, 78};
    int element = 4432, size = 6;
    int search = Linearsearch(arr, element, size);
    if (search == 1)
    {
        printf("Yur element %d was not found in the array\n",element);
    }
    else
    {
        printf("%d found at %d", element, search);
    }

    return 0;
}