#include <bits/stdc++.h>
using namespace std;
// creating a macro -> A peice of code in a program that is replaced by a macro
#define PI 3.14
/*
** Advantages of macros over declaring a variable:
1. maintainence of the code
2. No extra storage
3. value can't be altered
*/

#define min(a,b) ( (a<b) ? a : b )

int main()
{
    int rad = 0;
    cout<<"Enter radius: ";
    cin>>rad;
    cout<<"The area is: "<<PI*rad*rad<<endl;
    cout<<"The circumference is: "<<2*PI*rad<<endl;
    cout<<"Checking out min function: "<<endl;
    int a = 200;
    int b = 312;
    printf("Min of %d and %d is %d",a, b,min(a,b));
    cout << endl;

    
    return EXIT_SUCCESS;
}