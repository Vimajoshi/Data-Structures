#include <bits/stdc++.h>
using namespace std;

void PrintRowSum(int arr[][3])
{
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    int twoD[2][3];
    // printing the array
    int x = 1;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << "Enter element " << x << ": ";
            cin >> twoD[i][j];
            x++;
        }
    }
    cout << endl;
    // printing :
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Row Wise Sum: " << endl;
    PrintRowSum(twoD);
    return EXIT_SUCCESS;
}