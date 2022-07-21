#include <bits/stdc++.h>
using namespace std;

int SumOfArray(int arr1[], int n, int arr2[], int m){
    int dig1 = 0;
    int dig2 = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        dig1 = dig1 + (arr1[i]*pow(10,(n-i-1)));
    }
    for (int j = 0; j < m; j++)
    {
        dig2 = dig2 + (arr2[j]*pow(10,(m-j-1)));
    }

    sum = dig1 + dig2;

    return sum;
}

int main()
{
    int arr1[3] = {4,5,1};
    int arr2[3] = {3,4,5};

    int Sum = SumOfArray(arr1,3,arr2,3);
    cout<<"Sum is: "<<Sum<<endl;
    
    return EXIT_SUCCESS;
}