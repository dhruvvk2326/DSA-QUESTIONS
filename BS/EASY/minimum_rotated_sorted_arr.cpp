#include <iostream>
#include <vector>

int findMinimum(const std::vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;

    // If the array is not rotated at all
    if (nums[start] < nums[end])
    {
        return nums[start];
    }

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        // If mid element is greater than its next element, mid+1 element is the minimum
        if (nums[mid] > nums[mid + 1])
        {
            return nums[mid + 1];
        }

        // If mid element is smaller than its previous element, mid element is the minimum
        if (nums[mid] < nums[mid - 1])
        {
            return nums[mid];
        }

        // Decide whether to move the start or end pointer
        if (nums[mid] > nums[start])
        {
            // Mid element is greater than start element, the minimum is in the right part
            start = mid + 1;
        }
        else
        {
            // Mid element is less than or equal to start element, the minimum is in the left part
            end = mid - 1;
        }
    }

    // After the loop ends, start should point to the minimum element
    return nums[start];
}

int main()
{
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int minimum = findMinimum(nums);
    std::cout << "Minimum element: " << minimum << std::endl;

    return 0;
}
