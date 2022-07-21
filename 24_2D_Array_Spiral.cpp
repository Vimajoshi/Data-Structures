#include <bits/stdc++.h>
using namespace std;

vector<int> Print_Spiral(vector<vector<int>> vec){
    vector<int> ans;
    int row = vec.size();       // no. of rows
    int col = vec[0].size();    // no. of cols

    int count = 0;
    int total = row*col;
    // indexs

    int Start_Row = 0;
    int End_Row = row-1;
    int Start_Col = 0;
    int End_Col = col-1;

    while(count<total){
        // print starting row
        for (int i = Start_Col; i <= End_Col && count<total; i++)//1
        {
            ans.push_back(vec[Start_Row][i]);
            count++;
        }
        Start_Row++;
        // print ending col
        for (int i = Start_Row; i <= End_Row && count<total; i++)//2
        {
            ans.push_back(vec[i][End_Col]);
            count++;
        }
        End_Col--;
        // print ending row
        for (int i = End_Col; i >= Start_Col && count<total; i--)//3
        {
            ans.push_back(vec[End_Row][i]);
            count++;
        }
        End_Row--;

        // print starting col
        for (int i = End_Row; i >= Start_Row && count<total; i--)//4
        {
            ans.push_back(vec[i][Start_Col]);
            count++;
        }
        Start_Col++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> arr1 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    vector<int> vec1 = Print_Spiral(arr1);

    for (int i = 0; i < vec1.size(); i++)
    {
        cout<<vec1[i]<<" ";
    }
    
    cout << endl;
    return EXIT_SUCCESS;
}