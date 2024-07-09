#include <iostream>
#include <stack>
using namespace std;

void middle(stack<int> &st, int &size)
{
    if (st.size() == size / 2)
    {
        cout << st.top();
        return;
    }
    int temp = st.top();
    st.pop();
    middle(st, size);
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(7);
    st.push(14);
    st.push(112);
    int size = st.size();
    middle(st, size);
    return 0;
}
