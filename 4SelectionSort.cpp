#include <bits/stdc++.h>
using namespace std;

void SelectionSort(vector<int> &vec){
    for (int i = 0; i < vec.size(); i++)
    {
        int minInd = i;
        for (int j = i+1; j < vec.size(); j++)
        {
            if(vec[j]<vec[minInd]){
                swap(vec[i],vec[j]);
            }
        }
        
    }
}

int main()
{
    vector<int> vector1 = {100,90,20,10,6,7,4,3,2,1};
    cout<<"The Array was: "<<endl;
    for (int i = 0; i < vector1.size(); i++)
    {
        cout<<vector1[i]<<" ";
    }
    cout << endl;
    SelectionSort(vector1);
    cout<<"The Array after sorting: "<<endl;
    for (int i = 0; i < vector1.size(); i++)
    {
        cout<<vector1[i]<<" ";
    }
    cout << endl;
    
    return EXIT_SUCCESS;
}