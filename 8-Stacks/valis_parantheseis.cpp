#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

bool valid_paran(string &str, stack<char> &st, int index)
{
    while (index < str.size())
    {
        if (str[index] == '(' || str[index] == '[' || str[index] == '{')
        {
            st.push(str[index]);
        }
        else
        {
            if (!st.empty())
            {
                if (str[index] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (str[index] == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (str[index] == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        index = index + 1;
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "((((([])))))";
    stack<char> st;
    int index = 0;
    if (valid_paran(str, st, index))
    {
        cout << "valid";
    }
    else
    {
        cout << "not valid";
    }

    return 0;
}