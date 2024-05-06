#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int max_profit = 0;
    int buying_mini = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        int profit = prices[i] - buying_mini;
        max_profit = max(profit, max_profit);
        buying_mini = min(buying_mini, prices[i]);
    }
    return max_profit;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProf = maxProfit(prices);
    cout << "Maximum profit: " << maxProf << endl;
    return 0;
}