#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{

    string str = "3[a2[bc]]";
    stack<string> st;
    for (auto ch : str)
    {
        if (!st.empty() && ch == ']')
        {
            string temp_path = "";
            while (!st.empty() && st.top() != "[")
            {
                temp_path += ch;
                st.pop();
            }
            cout << "temp path" << temp_path << " ";
            // exclude [
            st.pop();
            string repeat_times = "";
            while (!st.empty() && isdigit(st.top()[0]))
            {
                repeat_times += ch;
                st.pop();
            }
            reverse(repeat_times.begin(), repeat_times.end());
            int n = stoi(repeat_times);
            cout << n << " ";
            string to_push = "";
            while (n > 0)
            {
                to_push += temp_path;
                n--;
            }
            st.push(to_push);
        }
        else
        {
            cout << "push" << ch << " ";
            string temp(1, ch);
            st.push(temp);
        }
    }

    string original = "";
    while (!st.empty())
    {
        original += st.top();
        st.pop();
    }
    reverse(original.begin(), original.end());
    cout << original;
    return 0;
}