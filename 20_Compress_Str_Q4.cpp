#include <bits/stdc++.h>
using namespace std;

int compress_String(vector<char> chars)
{
    int i = 0;
    int ansInd = 0;
    int n = chars.size();

    while (i < n)
    {
        int j = i + 1;
        while (j < n && chars[i] == chars[j])
        {
            j++;
        }
        // we will come out of loop only in two conditions:
        // 1. full array is traversed
        // 2. new element is found
        // Now storing the element
        chars[ansInd++] = chars[i];
        // storing count
        int count = j - i;

        if (count > 1)
        {
            // converting conuting into single digit and saving in answer
            string cnt = to_string(count);
            for (char ch : cnt)
            {
                chars[ansInd++] = ch;
            }
        }
        i = j;
    }
    return ansInd;
}

int main()
{
    vector<char> ch = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int ans = compress_String(ch);
    cout << "Ans: " << ans << endl;
    return EXIT_SUCCESS;
}
