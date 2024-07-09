#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    // m!=n*(n-1)*(n-2)......
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}