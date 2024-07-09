#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

void helper(vector<int> temp, vector<vector<int>> &ans, vector<int> arr, int index, int target, int &mini)
{
    if (target == 0)
    {
        ans.push_back(temp);
        int size = temp.size();
        if (size < mini)
        {
            mini = size;
        }

        return;
    }
    if (target < 0 || index == arr.size())
    {
        return;
    }
    // include
    temp.push_back(arr[index]);
    target = target - arr[index];
    helper(temp, ans, arr, index, target, mini);
    temp.pop_back();
    target = target + arr[index];
    // exclude
    helper(temp, ans, arr, index + 1, target, mini);
}

int main()
{
    // You can take repetitions
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans;
    int i = 0;
    int sum = 5;
    vector<int> temp;
    int mini = INT_MAX;
    helper(temp, ans, arr, i, sum, mini);
    for (auto &v : ans)
    {
        for (int &i : v)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    cout << mini;
    return 0;
}

// // better alternate solution:

// class Solution {
// public:
//     void solve(vector<int>& candidates, int target, int ind, vector<vector<int>>& ans, vector<int>& output){
//         //base case
//         if(target == 0){
//             ans.push_back(output);
//             return;
//         }
//         if(target < 0){
//             return;
//         }

//         //recursive relation
//         for(int i=ind; i<candidates.size(); i++){
//             output.push_back(candidates[i]);
//             solve(candidates, target-candidates[i], i, ans, output);
//             output.pop_back();
//         }
//     }

//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<vector<int>> ans;
//         vector<int> output;
//         int ind = 0;
//         solve(candidates, target, ind, ans, output);
//         return ans;
//     }
// };