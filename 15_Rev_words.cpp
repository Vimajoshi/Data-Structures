#include <iostream>
using namespace std;

string Rev_String(string str){
    int s = 0;
    int e = str.size()-1;

    while (s<=e)
    {
        swap(str[s++],str[e--]);
    }
    return str;
}
string ReverseWord(char arr[]){
    string s = "";
    string s1 = "";
    int n = 0;
    while(arr[n] != '\0'){
        n++;
    }
    cout<<"Size: "<<n<<endl;
    for (int i = n-1; i >= 0; i--)
    {
        while (arr[i] != ' ' && i >= 0)
        {
            s1.push_back(arr[i]);
            i--;
        }
        s1 = Rev_String(s1);
        s.append(s1);
        s1.clear();
    }
    return s;
}
int main()
{
    char arr[] = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    string sol = ReverseWord(arr);
    cout<<"Arr: "<<sol<<endl;
    return 0;
}