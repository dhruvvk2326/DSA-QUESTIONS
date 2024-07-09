#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{

    string str = "/a//b////c/d//././/..";
    stack<string> st;
    int i = 0;
    while (i != str.size())
    {
        int start = i, end = i + 1;
        while (end < str.size() && end != '/')
        {
            end++;
        }
        string temp = str.substr(start, end - start);
        if (temp == "/" || temp == "/.")
        {
            continue;
        }
        if (temp != "/..")
        {
            st.push(temp);
        }
        else if (!st.empty())
        {
            st.pop();
        }
        i++;
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}