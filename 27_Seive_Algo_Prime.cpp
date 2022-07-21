#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
public:
    int countPrimes(int n)
    {
        int cnt = 0;
        vector<bool> prime(n + 1, true);

        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                cnt++;
                for (int j = 2 * i; j < n; j = j + i)
                {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};

int main()
{

    Solution s1;
    int ans = s1.countPrimes(12);
    cout<<"Ans: "<<ans<<endl;

    return EXIT_SUCCESS;
}