#include <bits/stdc++.h>
using namespace std;

bool CheckSortOrNot(int arr[], int n){
    int count = 0;
    for (int i = 1; i < n; i++) //this is for checking rotated array
    {
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[0]<arr[n-1]){ // case 2: this is for checking only sorted array
        count++;
    }

    return count==1;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    bool ans = CheckSortOrNot(arr,5);

    cout<<"Sort And Rotated or not: "<<ans<<endl;
    
    return EXIT_SUCCESS;
}