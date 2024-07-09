#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
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
int main()
{
    stack<int> st;
    st.push(1);
    st.push(5);
    st.push(6);
    st.push(11);
    st.push(1566);
    st.push(9);
    int target = 10;
    insert_at_bottom(st, target);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}