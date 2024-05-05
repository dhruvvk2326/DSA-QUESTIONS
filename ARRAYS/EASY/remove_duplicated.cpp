#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int i = 0;
    for (int j = i + 1; j < nums.size(); j++)
    {
        if (nums[i] != nums[j])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = removeDuplicates(nums);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}