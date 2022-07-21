#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char c){
    if(c>='a' && c<='z'){
        return c;
    }else{
        char temp = c - 'A' + 'a';
        return temp;
    }
}

bool chk_Palindrome(string str, int n){
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        if(str[s]=='@' || str[s]=='&' || str[s]=='?'){
            s++;
        }
        else if(str[e]=='@' || str[e]=='&' || str[e]=='?'){
            e--;
        }
        else if(toLowerCase(str[s]) != toLowerCase(str[e])){
            return false;
        }
        
        else
        {
            s++;
            e--;
        }
    }
    return true;
}


int main()
{
    string str = "";
    // char ch = 'a';
    // cout<<"char is: "<<toLowerCase(ch);
    // cout << endl;
    cout<<"Enter your string: ";
    cin>>str;
    int n = str.size();
    cout<<"N: "<<n<<endl;
    cout<<str<< " is palindrome or not: "<<chk_Palindrome(str,n);
    cout << endl;
    return EXIT_SUCCESS;
}