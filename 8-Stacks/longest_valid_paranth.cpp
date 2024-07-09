#include <iostream>
#include <vector>
#include <limits.h>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    string str = "(((())))))))((()))";
    stack<int> st;
    st.push(-1);
    int maxi = INT_MIN;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ch == '(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if (st.empty())
            {
                st.push(i);
            }
            else
            {
                int len = i - st.top();
                maxi = max(len, maxi);
            }
        }
    }
    cout << maxi;
    return 0;
}