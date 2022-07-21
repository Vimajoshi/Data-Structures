#include <bits/stdc++.h>
using namespace std;

int main()
{
    // refrence variable: same memory address but diffrent name of a value
    int a = 100;
    int &b = a; // b is refrence variable

    cout<<"Address of a: "<<&a<<endl;
    cout<<"Address of b: "<<&b<<endl;
    cout<<"b: "<<b<<endl;
    
    return EXIT_SUCCESS;
}