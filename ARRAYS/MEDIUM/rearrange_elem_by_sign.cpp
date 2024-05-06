#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int positive_number_index = 0;
    int negative_number_index = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            ans[positive_number_index] = nums[i];
            positive_number_index += 2;
        }
        else
        {
            ans[negative_number_index] = nums[i];
            negative_number_index += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, -2, 3, -4, 5};
    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged Array: ";
    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}