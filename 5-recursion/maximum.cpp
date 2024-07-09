#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

void maximum(int arr[], int &n, int &i, int &max)
{
    // base case
    if (i >= n)
    {
        return;
    }
    if (arr[i] > max)
    {
        max = arr[i];
    }

    i = i + 1;
    maximum(arr, n, i, max);
}

int main()
{
    int arr[10] = {0, 1, 4, 2, 4, 10, 6, 7, 8, 9};
    int n = 10;
    int max = INT_MIN;
    int index = 0;
    maximum(arr, n, index, max);
    cout << max;
    return 0;
}