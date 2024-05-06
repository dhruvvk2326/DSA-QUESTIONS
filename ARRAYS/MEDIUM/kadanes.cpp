#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int curr_sum = 0;
    int largest = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        curr_sum += nums[i];
        largest = max(curr_sum, largest);
        if (curr_sum < 0)
        {
            curr_sum = 0;
        }
    }
    return largest;
}
int main()
{
    vector<int> nums = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(nums);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}