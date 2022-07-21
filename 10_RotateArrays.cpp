#include <bits/stdc++.h>
using namespace std;
void RotateArray(int arr[], int n, int k){
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        temp[(i+k)%n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
    

}
void Print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    RotateArray(arr,6,2);
    Print(arr,6);
    
    return EXIT_SUCCESS;
}