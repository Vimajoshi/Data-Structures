#include <bits/stdc++.h>
using namespace std;

void Merge(int arr1[], int n, int arr2[], int m){
    int i=0,j = 0;
    int k = 0;
    while ((i<n) && (j<m))
    {
        if(arr1[i]<arr2[j]){
            arr1[k] = arr1[i];
            k++;
            i++;
        }else{
            arr1[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr1[k] = arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr1[k] = arr2[j];
        k++;
        j++;
    }
}

void Print(int arr[], int a){
    for (int i = 0; i < a; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int arr1[6] = {1,2,3,0,0,0};
    int arr2[3] = {4,5,6};

    Merge(arr1,3,arr2,3);
    Print(arr1,6);
    
    return EXIT_SUCCESS;
}