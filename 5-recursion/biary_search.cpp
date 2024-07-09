#include <iostream>
#include <vector>


int binarySearch(const std::vector<int> &nums, int start, int end, int target)
{
    if (start > end)
    {
        return -1; // Target value not found
    }

    int mid = start + (end - start) / 2;
    if (nums[mid] == target)
    {
        return mid; // Target value found
    }
    else if (nums[mid] > target)
    {
        return binarySearch(nums, start, mid - 1, target); // Search left half
    }
    else
    {
        return binarySearch(nums, mid + 1, end, target); // Search right half
    }
}


int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 5, 7, 8, 9};
    int start = 0;
    int end = nums.size() - 1;
    int target = 8;

    int result = binarySearch(nums, start, end, target);
    std::cout << result << std::endl;

    return 0;
}