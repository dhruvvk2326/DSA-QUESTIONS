#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sorted(vector<int> &ans, int index)
{
    // base case
    if (index = ans.size() - 1)
    {
        return true;
    }
    if ((ans[index + 1] >= ans[index]))
    {

        return sorted(ans, index + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> ans = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0;
    if (sorted(ans, index))
    {
        cout << "sorted";
    }
    else
    {
        cout << "not sorted";
    }

    return 0;
}