#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            cnt++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        cnt++;
    }
    return cnt <= 1;
}

int main()
{
    // Test cases
    vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};

    cout << check(nums1) << endl; // Output: 1 (true)
    cout << check(nums2) << endl; // Output: 0 (false)

    return 0;
}