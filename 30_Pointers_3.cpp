#include <bits/stdc++.h>
using namespace std;

int main()
{
    // double pointer: Pointer to a pointer
    int a = 100;

    int* ptr = &a;

    int** ptr1 = &ptr;

    cout<<"ptr: "<<ptr<<endl;
    cout<<"*ptr: "<<*ptr<<endl;
    cout<<"ptr1: "<<ptr1<<endl;
    cout<<"*ptr1: "<<*ptr1<<endl;
    
    return EXIT_SUCCESS;
}