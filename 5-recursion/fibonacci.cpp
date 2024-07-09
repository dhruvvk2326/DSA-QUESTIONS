#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fibonacci(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    int ans = fibonacci(n - 1) + fibonacci(n - 2);
    return ans;
}

int main()
{
    // f(n)=(n-1)+(n-2)
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    int a = 0;
    int b = 1;
    int c = a + b;
    cout << a << " ";
    cout << b << " ";
    for (int i = 0; i < n - 2; i++)
    {
        cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}