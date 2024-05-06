// #include <iostream>
// #include <vector>
// using namespace std;

// int missingNumber(vector<int> &nums)
// {
//     int xor1 = 0;
//     int xor2 = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         xor1 = xor1 ^ i;
//         xor2 = xor2 ^ nums[i];
//     }
//     xor1 = xor1 ^ nums.size();
//     return xor1 ^ xor2;
// }

// int main()
// {
//     vector<int> nums = {0, 1, 3, 4, 5};
//     int missing = missingNumber(nums);
//     cout << "Missing number: " << missing << endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <numeric>
// using namespace std;

// int missingNumber(vector<int> &nums)
// {

//     int n = nums.size();
//     int Tsum = (n * (n + 1)) / 2;
//     return Tsum - accumulate(nums.begin(), nums.end(), 0);
// }

// int main()
// {
//     vector<int> nums = {0, 1, 3, 4, 5};
//     int missing = missingNumber(nums);
//     cout << "Missing number: " << missing << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v(n + 1, -1);
    for (int i = 0; i < nums.size(); i++)
    {
        v[nums[i]] = nums[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == -1)
            return i;
    }
    return 0;
}
int main()
{
    vector<int> nums = {0, 1, 3, 4, 5};
    int missing = missingNumber(nums);
    cout << "Missing number: " << missing << endl;
    return 0;
}