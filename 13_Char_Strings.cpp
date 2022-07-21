#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int GetLength(char x[]){
    int i = 0;
    while(x[i] != '\0'){
        i++;
    }
    return i;
}

void Reverse(char x[], int n){
    int s = 0;
    int e = n-1;
    
    while(s<e){
        swap(x[s++],x[e--]);
    }

}

int main()
{
    char name[20];

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name;
    cout << endl;
    int length_Str = GetLength(name);
    cout<<"Length of the string is: "<<length_Str<<endl;
    Reverse(name,length_Str);
    cout<<"Reverse of the string: "<<name<<endl;

    return EXIT_SUCCESS;
}