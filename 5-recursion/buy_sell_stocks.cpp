#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

void max_profit(vector<int> &arr, int &index, int &max_price, int &min_price)
{
    // BASE CASE
    if (index >= arr.size())
    {
        return;
    }

    if (arr[index] < min_price)
    {
        min_price = arr[index];
    }

    int todays_profit = arr[index] - min_price;
    if (todays_profit > max_price)
    {
        max_price = todays_profit;
    }
    index = index + 1;
    max_profit(arr, index, max_price, min_price);
}

int main()
{

    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int index = 0;
    int max_price = INT_MIN;
    int min_price = INT_MAX;
    max_profit(arr, index, max_price, min_price);
    cout << max_price;
    return 0;
}