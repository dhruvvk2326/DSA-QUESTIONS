#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int power(int n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    int ans = 2 * power(n - 1);
    return ans;
}

int main()
{
    // 2^n=2*2^n-1
    int n;
    cin >> n;
    cout << power(n);
    return 0;
}