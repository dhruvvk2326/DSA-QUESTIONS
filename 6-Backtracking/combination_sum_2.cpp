#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void solve(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, int index, int &target)
{

    if (target == 0)
    {
        ans.push_back(temp);
        return;
    }

    if (target < 0)
    {
        return;
    }
    if (index >= arr.size())
    {
        return;
    }
    // INCLUDE
    temp.push_back(arr[index]);
    target = target - arr[index];
    solve(arr, ans, temp, index + 1, target);
    temp.pop_back();
    target = target + arr[index];

    // EXCLUDE
    while ((index + 1 < arr.size()) && (arr[index] == arr[index + 1]))
    {

        index++;
    }
    solve(arr, ans, temp, index + 1, target);
}

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int target = 8;
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