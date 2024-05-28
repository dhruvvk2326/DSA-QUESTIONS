#include <bits/stdc++.h>
using namespace std;

int calculator(vector<int> &weights, int &capacity)
{
    int days = 1, load = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        if (weights[i] + load > capacity)
        {
            days++;
            load = weights[i]; // new day new load
        }
        else
        {
            load += weights[i];
        }
    }
    return days;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int start = *max_element(weights.begin(), weights.end());
    int end = 0;
    for (auto it : weights)
    {
        end += it;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int no_of_days = calculator(weights, mid);
        if (no_of_days <= days)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return start;
}

int main()
{
    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    cout << shipWithinDays(weights, days) << endl;
    return 0;
}