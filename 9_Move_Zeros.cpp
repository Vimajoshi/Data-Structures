#include <bits/stdc++.h>
using namespace std;

void MoveZeros(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < (n); i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    for (int k = j; k < n; k++)
    {
        arr[k] = 0;
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
    //int arr[9] = {0, 1, 0, 3, 12, 0, 0, 1000, 123};
    int arr[5] = {5,0,3,1,0};
    MoveZeros(arr, 5);
    Print(arr, 5);
    return EXIT_SUCCESS;
}