#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void helper(string &main, string &substring)
{
    int position = main.find(substring);
    // BASE CASE
    if (position == string::npos)
    {
        return;
    }
    else
    {
        string left = main.substr(0, position);
        string right = main.substr(position + substring.size(), main.size());
        main = left + right;
        helper(main, substring);
    }
}

int main()
{
    // substr function
    string main = "daabcbaabcbc";
    string substring = "abc";
    helper(main, substring);
    cout << main;
    return 0;
}