// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string s = "abcabcababccv";
//     string str = "abc";
//     string t = "";

//     while (s.find(str) != string::npos)
//     {
//         int pos = s.find(str);

//         string temp = s.substr(0, pos) + s.substr(pos + str.size());
//         s = temp;
//     }

//     if (s == t)
//     {
//         cout << "valid";
//     }
//     else
//     {
//         cout << "not valid";
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
int main()
{
    string s = "abcabcababcc";
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == 'a')
        {
            st.push(ch);
        }
        else if (ch == 'b')
        {
            if (!st.empty() && st.top() == 'a')
            {
                st.push(ch);
            }
            else
            {
                cout << "invalid";
                break;
            }
        }

        else if (ch == 'c')
        {
            if (!st.empty() && st.top() == 'b')
            {
                st.pop();
            }
            if (!st.empty() && st.top() == 'a')
            {
                st.pop();
            }
            else
            {
                cout << "invalid";
                break;
            }
        }
        else
        {
            cout << "invalid";
            break;
        }
    }

    if (st.empty())
    {
        cout << "valid";
    }
    else
    {
        cout << "invalid";
    }

    return 0;
}