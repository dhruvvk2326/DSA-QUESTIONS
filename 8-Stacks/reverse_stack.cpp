#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &st, int &target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_at_bottom(st, target);
    st.push(temp);
}

void reverse(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();
    reverse(st);
    insert_at_bottom(st, temp);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(6);
    st.push(11);
    st.push(1566);
    st.push(9);

    reverse(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}