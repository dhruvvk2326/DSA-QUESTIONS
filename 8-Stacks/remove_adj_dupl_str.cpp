#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    string str = "abbaca";
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        cout << ch << " ";

        if (!st.empty() && ch == st.top())
        {
            st.pop();
        }

        else
        {
            st.push(ch);
        }
    }

    cout << endl;

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}