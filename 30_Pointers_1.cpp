#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    int a = 100;
    int *ptr = &a;
    cout<<"Pointer: "<<ptr<<endl;
    cout<<"value at pointer: "<<*ptr<<endl;

    // 2nd method
    int *ptr2 = 0;
    ptr2 = &a;
    cout << endl;
    cout<<"Pointer: "<<ptr2<<endl;
    cout<<"value at pointer: "<<*ptr2<<endl;
    */
    // int num = 5;
    // int *ptr = &num;
    // cout<<"ptr: "<<ptr<<endl;
    // cout<<"*ptr: "<<*ptr<<endl;
    // (*ptr)++;
    // cout<<"After *ptr++: "<<endl;
    // cout<<"ptr: "<<ptr<<endl;
    // cout<<"*ptr: "<<*ptr<<endl;

    int i = 5;
    int *ptr = &i;

    cout<<"ptr: "<<ptr<<endl;
    cout<<"ptr+1: "<<ptr+1<<endl;
    /* if we increment the pointer then the pointer pointing to the variable is incremented by that variable size */
    

    
    return EXIT_SUCCESS;
}