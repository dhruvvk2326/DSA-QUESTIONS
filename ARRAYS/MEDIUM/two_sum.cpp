// #include<iostream>
// #include<vector>
// #include<unordered_map>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> mp;
//         vector<int> ans;
//         for(int i=0;i<nums.size();i++){
//             if(mp.find(target-nums[i])!=mp.end()){
//                 ans.push_back(i);
//                 ans.push_back(mp[target-nums[i]]);
//                 break;
//             }
//             else if(mp.find(target-nums[i])==mp.end()){
//                 mp[nums[i]]=i;
//             }
//         }
//         return ans;
// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
//     vector<int> result = twoSum(nums, target);
//     cout << "Indices: " << result[0] << ", " << result[1] << endl;
//     return 0;
// }

// IF NO DUPLICATES

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = i;
    }
    sort(nums.begin(), nums.end());
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum == target)
        {
            return {mp[nums[start]], mp[nums[end]]};
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}
