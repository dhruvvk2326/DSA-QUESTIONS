#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int max(vector<int> &arr, int index)
{
    if (index >= arr.size())
    {
        return 0;
    }

    // Include the present house
    int amount1 = arr[index] + max(arr, index + 2);
    int amount2 = 0 + max(arr, index + 1);
    return amount1 > amount2 ? amount1 : amount2;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int index = 0;
    cout << max(arr, index);
    return 0;
}