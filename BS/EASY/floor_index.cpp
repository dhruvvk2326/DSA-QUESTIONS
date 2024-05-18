#include <iostream>
#include <vector>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x)
{

    int res = -1; // Initialize with -1 assuming no floor found
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == x) // If current ele is equal to x, then it is the floor of x
        {
            return mid;
        }
        else if (v[mid] < x) // If curr ele is less than x, update floorIndex & search ri8 half
        {
            res = mid; // coz that is the present greatest smaller of x
            start = mid + 1;
        }
        else // If current ele is greater than x, search left half
        {
            end = mid - 1;
        }
    }
    return res;
}
int main()
{
    // Test the findFloor function
    vector<long long> v = {1, 2, 3, 4, 5};
    long long n = v.size();
    long long x = 3;
    int floorIndex = findFloor(v, n, x);
    cout << "Floor index of " << x << " is: " << floorIndex << endl;

    return 0;
}