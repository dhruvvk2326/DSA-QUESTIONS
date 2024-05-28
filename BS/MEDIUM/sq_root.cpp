#include <bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x)
{
    if (x == 1)
        return 1;
    long long start = 1;
    long long end = x;
    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        if (mid * mid == x)
        {
            return mid;
        }
        else if ((mid * mid) > x)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return end;
}

int main()
{
    long long int x;
    cin >> x;
    cout << floorSqrt(x);
    return 0;
}