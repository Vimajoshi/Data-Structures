#include <bits/stdc++.h>
using namespace std;

void print_Wave_Form(vector<vector<int>> vec1, int r, int c){
    for (int col = 0; col < c; col++)
    {
        if(col%2==0){
            // top to bottom approach
            int i = 0;
            while(i<r){
                cout<<vec1[i][col]<<" ";
                i++;
            }
            cout << endl;
        }
        else{
            // bottom to top approach
            int i = r-1;
            while (i>=0)
            {
                cout<<vec1[i][col]<<" ";
                i--;
            }
            cout << endl;
        }
    } 
}

int main()
{
    vector< vector<int> > vec = {{1,2,3,4,100}, {5,6,7,8,200}, {9,10,11,12,300}, {13,14,15,16,400}}; // 3X4

    print_Wave_Form(vec,4,5);

    
    return EXIT_SUCCESS;
}