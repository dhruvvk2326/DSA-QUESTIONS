#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pernmutation(string &str, int i, int j)
{
    // BASE CASE
    if (i >= str.size())
    {
        cout << str << " ";
        return;
    }

    for (int j = i; j < str.size(); j++)
    {
        swap(str[i], str[j]);
        pernmutation(str, i + 1, j);
        swap(str[i], str[j]);
    }
}

int main()
{
    string str = "abc";
    int i = 0;
    int j = 0;

    pernmutation(str, i, j);
    return 0;
}