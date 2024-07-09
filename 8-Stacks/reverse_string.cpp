#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main()
{
    stack<char> st;
    string str = "abcdef";
    int i = 0;
    while (i <= str.size())
    {
        // cout << str[i];
        st.push(str[i]);
        i++;
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }

    return 0;
}