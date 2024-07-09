#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int helper(vector<int> &arr, int index, int &max)
{
    if (index >= arr.size())
    {
        return;
    }
}

int main()
{
    vector<int> arr = {2, 1, 4, 9};
    int index = 0;
    int max = INT_MIN;
    cout << helper(arr, index, max);
    return 0;
}