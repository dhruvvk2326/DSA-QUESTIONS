#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int opening, int closing, string &output)
{
    if (opening == 0 && closing == 0)
    {
        cout << output << endl;
        return;
    }
    // INCLUDE OPENING
    if (opening > 0)
    {
        output = output + '(';
        solve(opening - 1, closing, output);
        output.pop_back();
    }

    if (closing > opening)
    {
        // INCLUDE CLOSING
        output = output + ')';
        solve(opening, closing - 1, output);
        output.pop_back();
    }
}

int main()
{
    int n = 3;
    int opening = n;
    int closing = n;
    string output = "";
    solve(opening, closing, output);
    return 0;
}