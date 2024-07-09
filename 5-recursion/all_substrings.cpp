#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void substring(string str, int index, string output)
{
    // Base case
    if (index >= str.size())
    {
        cout << output << " ";
        return;
    }
    // include i
    output.push_back(str[index]);
    substring(str, index + 1, output);
    output.pop_back();

    // exclude i
    substring(str, index + 1, output);
}

int main()
{
    string str = "abc";
    int index = 0;
    string output = "";
    substring(str, index, output);
    return 0;
}