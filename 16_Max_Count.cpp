#include <bits/stdc++.h>
using namespace std;

char FindMaxOccur(string str){
    int arr[26] = {0};
    // storing no. of occurence of each alphabet in the array
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        int num = 0;
        num = ch-'a';
        arr[num]++;
    }
    // Now finding the maximum no. of occurence of an element
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char FinalAns = 'a'+ans;
    return FinalAns;
    
}

int main()
{
    string strg = "";
    cout<<"Enter a String: ";
    cin>>strg;
    char ans = FindMaxOccur(strg);
    cout<<ans<<endl;
    
    return EXIT_SUCCESS;
}