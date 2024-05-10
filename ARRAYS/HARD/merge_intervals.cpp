#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(), intervals.end());
    for (const auto &interval : intervals)
    {
        if (ans.empty() || interval[0] > ans.back()[1])
        {
            ans.push_back(interval);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], interval[1]);
        }
    }
    return ans;
}

int main()
{
    // Test the merge function
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> merged = merge(intervals);

    // Print the merged intervals
    for (const auto &interval : merged)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}