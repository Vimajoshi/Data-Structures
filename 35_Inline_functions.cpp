#include <bits/stdc++.h>
using namespace std;
// inline func: when body of a function contains 1 line then we use inline function
// It replaces the function call(before compiling) with that one line in the body
// No extra space is used
// makes code look clean

inline int getMax(int &a, int &b)
{
    return (a > b) ? (a) : (b);
}

// default args

void PrintArr(int array[], int size, int start = 0)
// here start arguement is optional if not passed while function call will be 0 as default
{
    for (int i = start; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a = 100;
    int b = 3200;

    cout << "max is: ";
    cout << getMax(a, b) << endl;

    // default arguements
    int arr[] = {3, 5, 7, 9, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    PrintArr(arr, size);
    PrintArr(arr, size, 3);
    return EXIT_SUCCESS;
}