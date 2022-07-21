#include <bits/stdc++.h>
using namespace std;

bool Find_element(vector<vector<int>> vec, int target){
    int row = vec.size();
    int col = vec[0].size();

    int rowIndex = 0;
    int colIndex = col-1;

    while (rowIndex<row && colIndex>=0)
    {
        int element = vec[rowIndex][colIndex];
        if(element==target){
            cout<<"Indexes: "<<"["<<rowIndex<<", "<<colIndex<<"]"<<endl;
            return 1;
        }else if(element<target){
            rowIndex++;
        }else{
            colIndex--;
        }
    }
    cout<<"Element Not found"<<endl;
    return 0;
}

int main()
{
    vector<vector<int>> vec1 = {{1,2,3,4},{7,10,15,18},{9,16,23,29},{21,25,28,35}};
    Find_element(vec1, 350);
    
    return EXIT_SUCCESS;
}