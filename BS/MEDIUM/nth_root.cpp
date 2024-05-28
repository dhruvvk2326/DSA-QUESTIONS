#include <bits/stdc++.h>
using namespace std;

int NthRoot(int n, int m)
{
    int start = 1, end = m;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (pow(mid, n) == m)
        {
            return mid;
        }
        else if (pow(mid, n) > m)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // Test your NthRoot function here
    return 0;
}