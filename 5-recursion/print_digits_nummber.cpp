#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void digits(int n, int &ans)
{
    // base case
    if (n <= 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    ans = ans * 10 + digit;

    digits(n, ans);
    cout << digit << " ";
}

int main()
{
    int ans = 0;
    int n = 768;
    digits(n, ans);
    cout << endl;
    cout << ans;
    return 0;
}