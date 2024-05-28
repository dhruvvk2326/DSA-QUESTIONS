#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &bloomDay, int m, int boq, int flowers)
{
    int adj = 0, bc = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= m)
        {
            adj++;
            if (adj == flowers)
            {
                bc++;
                if (bc == boq)
                {
                    return true;
                }
                adj = 0;
            }
        }
        else
        {
            adj = 0;
        }
    }
    return false;
}

int minDays(vector<int> &bloomDay, int m, int k)
{

    int l = *min_element(bloomDay.begin(), bloomDay.end());
    int h = *max_element(bloomDay.begin(), bloomDay.end());
    int res = -1;

    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (isPossible(bloomDay, mid, m, k))
        {
            res = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}

int main()
{
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 1;
    cout << minDays(bloomDay, m, k) << endl;
    return 0;
}