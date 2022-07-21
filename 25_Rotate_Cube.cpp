#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> RotateCube(vector<vector<int>> cube)
{
    vector<vector<int>> ans = {{0},{0},{0}};
    int row = cube.size();

    int l = 0;
    int r = row - 1;

    for (int i = 0; i < row; i++)
    {
        
        for (int j = 0; j < row; j++)
        {
            ans[l][r] = cube[i][j];
            l = l+1;
        }
        l=0;
        r = r-1;
    }
    return ans;
}
int main()
{
    vector<vector<int>> vec1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Cube Earlier" << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1.size(); j++)
        {
            cout << vec1[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> ans1 = RotateCube(vec1);
    cout<<"Ans size: "<<ans1.size();
    cout << "Cube After 90d rotation" << endl;
    for (int i = 0; i < ans1.size(); i++)
    {
        for (int j = 0; j < ans1.size(); j++)
        {
            cout << ans1[i][j] << " ";
        }
        cout << endl;
    }
    return EXIT_SUCCESS;
}