#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void substring(string &str, string &output, int index)
{
    // BASE CASE
    if (index >= str.size())
    {
        cout << output << endl;
        return;
    }

    // INCLUDE CURRENT CHARACTER
    output = output + str[index];

    substring(str, output, index + 1);

    output.pop_back();

    // Exclude current character
    substring(str, output, index + 1);
}

int main()
{
    string str = "abcd";
    string output = "";
    int i = 0;
    substring(str, output, i);
    return 0;
}