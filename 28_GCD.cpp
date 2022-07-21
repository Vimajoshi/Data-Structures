#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    // finding the HCF/GCD by gcd(a,b)=gcd(a%b,b) until one parameter becomes 0
    if(a==0)
        return b;
    if(b==0)
        return a;
    
    while(a!=b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int ans = GCD(0,34);
    cout<<"Ans: "<<ans<<endl;
    
    return EXIT_SUCCESS;
}