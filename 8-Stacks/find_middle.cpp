#include <iostream>
#include <stack>
#include <string>

using namespace std;

void find_middle(stack<char> &st, string &str, int i)
{
    if (i >= str.size())
    {
        return;
    }
    find_middle(st, str, i + 1);
    i--;
    if (i == (str.size() - 1) / 2)
    {
        cout << str[i];
    }
}

int main()
{
    stack<char> st;
    string str = "abcdefga";
    int i = 0;
    find_middle(st, str, i);
    return 0;
}
