#include <bits/stdc++.h>
using namespace std;

int main()
{
    // dynamically creating the array
    int row =0, col=0;
    cout<<"Enter rows: ";
    cin>>row;
    cout << endl;
    cout<<"Enter columns: ";
    cin>>col;
    cout << endl;
    // creating a 2d array
    int** arr = new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i]=new int[col];
    }
    // taking input
    cout<<"Enter "<<row*col<<" elements: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout << endl;
    // output
    cout<<"Elements are: "<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout << endl;
    }
    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    delete []arr;
    
    return EXIT_SUCCESS;
}