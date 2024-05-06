// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int longestSubarrayWithSumK(vector<int> &nums, long long k)
// {
//     // PREFIX SUM , INDEX
//     unordered_map<long long, int> prefix_sum_map;
//     int max_len = 0;
//     long long sum = 0;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         sum += nums[i];
//         if (sum == k)
//         {
//             max_len = i + 1;
//         }
//         else if (prefix_sum_map.find(sum - k) != prefix_sum_map.end())
//         {
//             max_len = max(max_len, i - prefix_sum_map[sum - k]);
//         }

//         if (prefix_sum_map.find(sum) == prefix_sum_map.end())
//         {
//             prefix_sum_map[sum] = i;
//         }
//     }
//     return max_len;
// }
// int main()
// {
//     vector<int> nums = {1, -1, 5, -2, 3};
//     long long k = 3;

//     int result = longestSubarrayWithSumK(nums, k);

//     cout << "Maximum length of subarray with sum " << k << ": " << result << endl;

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> &a, long long k)
{
    int ans = 0, i = 0;

    long long sum = 0, n = a.size();

    for (int j = 0; j < n; j++)
    {

        sum += a[j];

        if (sum > k)
        {

            while (sum > k && i <= j)
            {

                sum -= a[i++];
            }
        }

        if (sum == k)
        {

            ans = max(ans, j - i + 1);
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {1, -1, 5, -2, 3};
    long long k = 3;

    int result = longestSubarrayWithSumK(a, k);

    cout << "Maximum length of subarray with sum " << k << ": " << result << endl;

    return 0;
}