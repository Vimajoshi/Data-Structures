#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // check for unusual chars
    bool Val_Char(char ch)
    {
        if ((ch > 'a' && ch < 'z') || (ch > '0' && ch < '9') || (ch > 'A' && ch < 'Z'))
        {
            return true;
        }
        return false;
    }

    // remove unusual chars
    string remove_Char(string str)
    {
        string temp;
        for (int i = 0; i < str.size(); i++)
        {
            if (Val_Char(str[i]))
            {
                temp.push_back(str[i]);
            }
        }
        return temp;
    }

    // convert to lowercase
    char toLowerCase(char c)
    {
        if (c >= 'a' && c <= 'z')
        {
            return c;
        }
        else
        {
            char temp = c - 'A' + 'a';
            return temp;
        }
    }
    // check Palindrome
    bool chk_Pal(string str)
    {
        int s = 0;
        int e = str.size() - 1;

        while (s < e)
        {
            if (toLowerCase(str[s]) == toLowerCase(str[e]))
            {
                s++;
                e--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s1;
    string str1 = "A man, a plan, a canal: Panama";
    string str2 = " ";
    string str3 = "My name is vimal";

    bool sol1 = s1.chk_Pal(s1.remove_Char(str1));
    bool sol2 = s1.chk_Pal(s1.remove_Char(str2));
    bool sol3 = s1.chk_Pal(s1.remove_Char(str3));

    cout<<"The string: "<< "'" << str1 <<"'"<<" is palindrome? "<<sol1;
    cout << endl;
    cout<<"The string: "<< "'" << str2 <<"'"<<" is palindrome? "<<sol2;
    cout << endl;
    cout<<"The string: "<< "'" << str3 <<"'"<<" is palindrome? "<<sol3;
    cout << endl;

    return EXIT_SUCCESS;
}