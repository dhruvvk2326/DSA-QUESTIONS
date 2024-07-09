#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check_char(string &str, int index, char ch)
{
    // base case
    if (index >= str.size())
    {
        return false;
    }

    if (str[index] == ch)
    {
        return true;
    }
    else
    {

        return check_char(str, index + 1, ch);
    }
}

int main()
{
    string str = "abcdefghijklmno";
    int index = 0;
    char ch = 'z';
    if (check_char(str, index, ch))
    {
        cout << "present";
    }
    else
    {
        cout << "not present";
    }

    return 0;
}