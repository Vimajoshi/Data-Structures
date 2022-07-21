#include <bits/stdc++.h>
using namespace std;

bool Binary_In_2D(vector<vector<int>> Matrix, int Target)
{
    int row = Matrix.size();
    int col = Matrix[0].size();
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = Matrix[mid / col][mid%col];
        if (element == Target)
        {
            return 1;
        }
        else if (element < Target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}

int main()
{
    vector<vector<int>> vec1 = {{3,6,10},{12,45,50},{56,90,150}};
    bool ans = Binary_In_2D(vec1,150);
    cout<<"Is target present: "<<ans<<endl;

    return EXIT_SUCCESS;
}