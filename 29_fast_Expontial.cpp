#include <bits/stdc++.h>
using namespace std;

int expontial(int a, int b, int m){
    int ans=1;

    if(b%2==0){
        for (int i = 0; i < b/2; i++)
        {
            ans = ans*a;
        }
        return (ans*ans)%m;
    }
    else{
        for (int i = 0; i < b/2; i++)
        {
            ans = ans*a;
        }
        return (ans*ans*a)%m;
    }
}

int main()
{
    int ans = expontial(4,3,10);
    cout<<"Ans: "<<ans<<endl;
    
    return EXIT_SUCCESS;
}