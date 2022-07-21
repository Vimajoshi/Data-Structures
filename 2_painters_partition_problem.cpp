#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> vec, int n, int k, int mid){
    int painterCount = 1;
    int Boards = 0;
    for (int i = 0; i < n; i++)
    {
        if(Boards+vec[i]<=mid){
            Boards += vec[i];
        }else{
            painterCount++;
            if(painterCount>k || vec[i]>mid){
                return false;
            }
            Boards = vec[i];
        }
    }
    return true;
}

int Partition(vector<int> vec, int n, int k){
    int start = 0;
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;
    while (end>=start)
    {
        if(isPossible(vec,n,k,mid)){
            ans = mid;
            end = mid-1;
        }else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main()
{
    vector<int> vectora = {10,20,30,40};
    int sol = Partition(vectora,4,2);
    cout<<"Min no of time: "<<sol<<endl;
    
    return EXIT_SUCCESS;
}