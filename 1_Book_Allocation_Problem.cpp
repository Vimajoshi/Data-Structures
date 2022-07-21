#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n ,int m, int mid){
    int studentCount = 1;
    int pageSum  = 0;
    for (int i = 0; i < n; i++)
    {
        if(pageSum + arr[i] <=mid)
        {
            pageSum += arr[i];

        }
        else
        {
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;    
}
int Alocate_Boooks(vector<int> arr, int n , int m){
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main()
{
    vector<int> vec1 = {12,34,67,90};
    vector<int> vec2 = {15,17,100,11};
    int answer = 0;

    cout<<" Allocating books "<<Alocate_Boooks(vec1,4,2);
    cout << endl;
    cout<<" Allocating books "<<Alocate_Boooks(vec2,4,4);
    cout << endl;
    
    return EXIT_SUCCESS;
}
