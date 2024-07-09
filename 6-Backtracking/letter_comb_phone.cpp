#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void solve(vector<string> &mapping, string &digits, string &output, int index)
{
    if (index >= digits.size())
    {
        cout << output << endl;
        return;
    }
    string to_add = mapping[digits[index] - '0'];
    for (int i = 0; i < to_add.size(); i++)
    {
        output.push_back(to_add[i]);
        solve(mapping, digits, output, index + 1);
        output.pop_back();
    }
}

int main()
{
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";
    string digits = "23";
    string output = "";
    int index = 0;
    solve(mapping, digits, output, index);
    return 0;
}