#include <iostream>
#include <vector>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    int i = 0, j = n - 1, floor = -1, ceil = -1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] <= x)
        {
            floor = a[mid];
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    i = 0, j = n - 1;
    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (a[mid] >= x)
        {
            ceil = a[mid];
            j = mid - 1;
        }
        else
        {
            i = mid + 1;
        }
    }
    return {floor, ceil};
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int x = 3;
    pair<int, int> result = getFloorAndCeil(arr, n, x);
    cout << "Floor: " << result.first << endl;
    cout << "Ceil: " << result.second << endl;
    return 0;
}