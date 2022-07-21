#include <bits/stdc++.h>
using namespace std;

void MergeArray(int arr1[], int n, int arr2[], int m, int arr3[])
{
    int i = 0 , j = 0;
    int k = 0;

    while ((i < n) && (j < m))
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    // copy rest of the elements
    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void Print(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr1[3] = {4, 10, 78};
    int arr2[4] = {1, 45, 56, 100};
    int arr3[7] = {0};

    MergeArray(arr1, 3, arr2, 4, arr3);
    Print(arr3,7);

    return EXIT_SUCCESS;
}