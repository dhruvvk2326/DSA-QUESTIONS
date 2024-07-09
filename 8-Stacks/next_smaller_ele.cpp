#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    vector<int> arr = {2, 1, 4, 3};
    stack<int> st;
    vector<int> ans(arr.size());
    st.push(-1);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (st.top() > arr[i])
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(arr[i]);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}