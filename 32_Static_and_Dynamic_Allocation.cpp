#include <bits/stdc++.h>
using namespace std;

int getSum(int arr[], int a){
    int sum = 0;
    for (int i = 0; i < arr[i]; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

int main()
{
    // int a = 100; static allocation
    int n;
    cout << "Enter the Size of the array: ";
    cin >> n;
    int *arr = new int[n]; 
    /*
    total size of this allocation: if n = 4
    arr => it is pointer so size will be 8 bytes
    new int[n] = 4*4 = 16
    total => 16+4 = 20 bytes
    */
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum = getSum(arr, n);
    cout<<"Sum of the elements in the array is: "<<sum<<endl;

    return EXIT_SUCCESS;
}
