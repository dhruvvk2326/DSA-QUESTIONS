#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void forward(int n)
{
    // base case
    if (n < 0)
    {
        return;
    }
    forward(n - 1);
    cout << n << " ";
}

void reverse(int n)
{
    // base case
    if (n < 0)
    {
        return;
    }

    cout << n << " ";
    reverse(n - 1);
}

int main()
{
    int n;
    cin >> n;
    forward(n);
    cout << endl;
    reverse(n);
    return 0;
}