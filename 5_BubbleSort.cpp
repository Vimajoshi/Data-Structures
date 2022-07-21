#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &vec)
{
    for (int i = 1; i < vec.size(); i++) // this loop is iterating the no. of rounds
    {
        for (int j = 0; j < (vec.size() - i); j++) // this loop is iterating the vector and comparing the j & j+1 index
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

int main()
{
    vector<int> vector1 = {5, 4, 3, 2, 1};
    cout << "The Array was: " << endl;
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
    BubbleSort(vector1);
    cout << "The Array after sorting: " << endl;
    for (int i = 0; i < vector1.size(); i++)
    {
        cout << vector1[i] << " ";
    }
    cout << endl;
    return EXIT_SUCCESS;
}