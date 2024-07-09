#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, int index, int target)
{
    if (target < 0)
    {
        return;
    }
    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }
    if (index >= arr.size())
    {
        return;
    }
    // include index
    temp.push_back(arr[index]);
    solve(arr, ans, temp, index, target - arr[index]);
    temp.pop_back();

    // EXCLUDE
    solve(arr, ans, temp, index + 1, target);
}

int main()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    vector<vector<int>> ans;
    vector<int> temp;
    int index = 0;
    solve(arr, ans, temp, index, target);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}