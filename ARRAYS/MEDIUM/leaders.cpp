#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
    int count = 1;
    int maxi = a[a.size() - 1];
    vector<int> ans;
    ans.push_back(maxi);
    for (int i = a.size() - 2; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            maxi = max(a[i], maxi);
            count++;
            ans.push_back(maxi);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> a = {16, 17, 4, 3, 5, 2};
    vector<int> ans = superiorElements(a);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}