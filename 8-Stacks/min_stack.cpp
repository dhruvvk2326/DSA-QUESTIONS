#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

stack<int> st1;
stack<int> st2;

void push(int element)
{
    st1.push(element);
    if (st2.empty() || st2.top() >= element)
    {
        st2.push(element);
    }
}

void pop()
{
    if (st1.empty())
    {
        cout << "no element present";
        return;
    }
    if (st1.top() == st2.top())
    {
        st1.pop();
        st2.pop();
    }
}

int get_min()
{
    if (st1.empty())
    {
        cout << "no element present";
        return -1;
    }
    return st2.top();
}

int main()
{

    push(5);
    push(2);
    push(7);
    push(1);
    cout << get_min() << endl;
    pop();
    cout << get_min() << endl;
    cout << st1.top();
    return 0;
}
