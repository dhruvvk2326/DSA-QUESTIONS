#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subarrays(vector<int> &arr, int index, vector<int> &temp)
{
    if (index >= arr.size())
    {
        for (auto i : temp)
        {
            cout << i << "  ";
        }
        cout << endl;
        return;
    }

    // Include
    temp.push_back(arr[index]);
    subarrays(arr, index + 1, temp);
    temp.pop_back();

    // Exclude
    subarrays(arr, index + 1, temp);
}

int main()
{
    // in main run for a loop and move second pointer from starting to end
    vector<int> arr = {1, 2, 3};
    vector<int> temp;

    int index = 0;
    subarrays(arr, index, temp);
    return 0;
}