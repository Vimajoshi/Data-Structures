#include <bits/stdc++.h>
using namespace std;

bool Chk_Palindeome(vector<char> v, int n){
    int s = 0;
    int e = n-1;
    for (int i = 0; i < n; i++)
    {
        if(v[s] != v[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    //vector<char> a = {'n','o','o','n'}; -> Yes
    // vector<char> a = {'a','b','d','g','d','b','a'}; ->Yes
    vector<char> a = {'k','a','m','a','l'}; // -> No
    cout<<"Is palindrome? "<<Chk_Palindeome(a,5);
    cout << endl;
    
    return EXIT_SUCCESS;
}