#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{

    vector<int> arr = {7, 2, 1, 2, 2};
    vector<int> ans(arr.size());
    stack<int> st;
    for (int i = 0; i < arr.size(); i++)
    {
        int item = arr[i];
        while (!st.empty() && arr[st.top()] <= item)
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = i + 1;
            st.push(i);
        }
        else
        {
            ans[i] = i - st.top();
            st.push(i);
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}