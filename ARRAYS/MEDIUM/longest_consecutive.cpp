// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int longestConsecutive(vector<int> &nums)
// {
//     if (nums.size() == 0)
//     {
//         return 0;
//     }
//     int max_count = 1;
//     int count = 0;
//     sort(nums.begin(), nums.end());
//     int last_smaller = INT_MIN;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] - 1 == last_smaller)
//         {
//             count++;
//             last_smaller = nums[i];
//             max_count = max(count, max_count);
//         }
//         else if (nums[i] != last_smaller)
//         {
//             count = 1;
//             last_smaller = nums[i];
//         }
//     }
//     return max_count;
// }

// int main()
// {
//     vector<int> nums = {100, 4, 200, 1, 3, 2};
//     cout << longestConsecutive(nums);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;
    // put all the array elements into set:
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    // Find the longest sequence:
    for (auto it : st)
    {
        // if 'it' is a starting number:
        if (st.find(it - 1) == st.end())
        {
            // find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums);
    return 0;
}