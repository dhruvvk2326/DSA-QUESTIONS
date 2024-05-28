#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int missing = arr[mid] - (mid + 1);
        if (missing < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return k + end + 1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << findKthPositive(arr, k) << endl;
    return 0;
}