#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    if (n == 1)
        return;

    int i = n - 2;

    // this loop will find the pivot point
    while (i >= 0 && nums[i + 1] <= nums[i])
    {
        i--;
    }

    if (i >= 0)
    {
        int j = n - 1;

        while (nums[j] <= nums[i])
            j--;

        // Swap the considered element with next greater element in the subarray

        swap(nums[i], nums[j]);

        // Reverse the subarray
        reverse(nums.begin() + i + 1, nums.end());
        return;
    }

    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}