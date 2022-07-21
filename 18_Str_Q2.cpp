#include <bits/stdc++.h>
using namespace std;

string Remove_Occurences(string str, string part)
{
    while (str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main()
{
    string s = "daabcbaabcbc";
    string s_part = "abc";
    string sol = Remove_Occurences(s, s_part);
    cout << "String was: " << s << endl;
    cout << "String After removing abc: " << sol << endl;
    return EXIT_SUCCESS;
}