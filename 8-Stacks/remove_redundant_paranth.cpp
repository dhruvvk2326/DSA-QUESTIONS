#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool is_Redundant(stack<char> &st, string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '/' || str[i] == '*')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            bool redundant = true;
            while (!st.empty() && st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    redundant = false;
                }
                st.pop();
            }
            st.pop(); // Pop the '('

            if (redundant)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    stack<char> st;
    string str = "(a+b)(b+c)";
    if (is_Redundant(st, str))
    {
        cout << "it is redundant";
    }
    else
    {
        cout << "not redundant";
    }

    return 0;
}
