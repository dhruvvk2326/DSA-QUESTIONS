#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int max_count = 0;

    for (auto it : nums)
    {
        if (it == 1)
        {
            count++;
            max_count = max(max_count, count);
        }
        else
        {
            count = 0;
        }
    }
    return max_count;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums);
    cout << "Max Consecutive Ones: " << maxConsecutiveOnes << endl;
    return 0;
}