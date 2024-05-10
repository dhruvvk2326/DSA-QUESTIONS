#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int, int> mpp;
    int maxi = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else
        {
            if (mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }

    return maxi;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int A[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int maxLength = maxLen(A, n);
    cout << "Maximum length of subarray with 0 sum: " << maxLength << endl;

    return 0;
}