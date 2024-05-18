#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &arr, int &k)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if mid points the target
        if (arr[mid] == k)
            return true;

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low = low + 1;
            high = high - 1;
            continue;
        }

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                // element exists:
                high = mid - 1;
            }
            else
            {
                // element does not exist:
                low = mid + 1;
            }
        }
        else
        { // if right part is sorted:
            if (arr[mid] <= k && k <= arr[high])
            {
                // element exists:
                low = mid + 1;
            }
            else
            {
                // element does not exist:
                high = mid - 1;
            }
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int k = 0;
    bool result = search(arr, k);
    cout << "Element found: " << boolalpha << result << endl;
    return 0;
}