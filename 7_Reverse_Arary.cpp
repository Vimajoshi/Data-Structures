#include <bits/stdc++.h>
using namespace std;
vector<int> ReverseArray(vector<int> vec, int M){
    int s = M;
    int e = vec.size()-1;
    while(s<=e){
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
    return vec;
}
int main()
{
    vector<int> v1 = {9,7,5,3,1,4,6,8,10};
    vector<int> v2 = ReverseArray(v1,5);
    cout<<"Array before reversing: "<<endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<< v1[i]<<" ";
    }
    cout << endl;
    cout<<"Array After reversing: "<<endl;
    for (int i = 0; i < v2.size(); i++)
    {
        cout<< v2[i]<<" ";
    }
    cout << endl;
    
    return EXIT_SUCCESS;
}