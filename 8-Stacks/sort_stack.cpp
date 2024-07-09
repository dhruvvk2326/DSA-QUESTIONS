#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void insert(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    if (st.top() >= target)
    {
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st, target);
    st.push(temp);
}

void sort(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int temp = st.top();
    st.pop();
    sort(st);
    insert(st, temp);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(4);
    st.push(1);
    sort(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}