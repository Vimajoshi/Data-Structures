#include <bits/stdc++.h>
using namespace std;
// Card -> not swap the elements but shift them accordingly
void InsertionSort(vector<int> &vec)
{
    int temp = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        temp = vec[i];
        int j = i-1;
        for (; j>=0; j--)
        {
            if (vec[j] > temp)
            {
                vec[j+1]=vec[j];
            }
            else
            {
                break;
            }
        }
        vec[j+1] = temp;
    }
}

int main()
{
    vector<int> vec1 = {7, 6, 5, 4, 3, 2, 1};
    InsertionSort(vec1);
    cout << "Sorted array is: " << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}