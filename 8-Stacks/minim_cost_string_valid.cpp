#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    string str = "{{{}";
    stack<char> st;
    if (str.length() % 2 == 1)
    {
        cout << "not valid";
    }
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '{')
        {
            st.push(str[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
        }
    }

    int a = 0;
    int b = 0;
    while (!st.empty())
    {
        if (st.top() == '{')
        {
            a++;
        }
        else
        {
            b++;
        }
        st.pop();
    }

    cout << ((a + 1) / 2 + (b + 1) / 2);
    return 0;
}