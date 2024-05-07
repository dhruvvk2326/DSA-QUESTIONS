#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int count = 0;
    int sum = 0;

    unordered_map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            count++;
        }
        if (mp.find(sum - k) != mp.end())
        {
            count += mp[sum - k];
        }
        mp[sum]++;
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 7;

    int result = subarraySum(nums, k);

    cout << "Number of subarrays with sum equal to " << k << ": " << result << endl;

    return 0;
}