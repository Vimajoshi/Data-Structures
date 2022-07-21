#include <bits/stdc++.h>
using namespace std;

bool IsPossible(vector<int> vec, int n, int k, int mid){
    int cowCount = 1;
    int lasPos = vec[0];
    for (int i = 0; i < n; i++)
    {
        if(mid<=vec[i]-lasPos){
            cowCount++;
            if(cowCount==k)
            {
                return true;
            }
            lasPos = vec[i];
        }
    }
    return false;
}

int Max_dis(vector<int> vec, int n, int k){
    sort(vec.begin(), vec.end());
    int min = 0;
    int maxi = -1; 
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,vec[i]);
    }
    
    int mid = min + (maxi-min)/2;
    int ans = -1;
    while (maxi>=min)
    {
        if(IsPossible(vec,n,k,mid)){
            ans = mid;
            min = mid+1;
        }else{
            maxi = mid-1;
        }
        mid = min + (maxi-min)/2;
    }
    return ans;
}

int main()
{
    vector<int> vec1 = {1, 2, 6, 3, 4};
    int sol = Max_dis(vec1, 5, 2);
    cout<<"Solution is: "<<sol<<endl;
    return 0;
}