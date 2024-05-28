// Method 1
// find the minimum eating per houer rate to complete the bananas in h hours
// so the range should be smalllest no of bananas to the largest no of bananas

// loop through each option and find the ans as soon as it gets to h hours break take the ceil value
// if (req_time<h){
//     return i
// }

// Method 2
// replace linear search to binary  search as soon as the answer lies in the range
// if possible move left to find the minimum

#include <bits/stdc++.h>
using namespace std;

int minEatingSpeed(vector<int> &piles, int h)
{
    int l = 1, r = *max_element(piles.begin(), piles.end());
    int m;
    while (l < r)
    {
        m = l + (r - l) / 2;
        int sum = 0;
        for (int num : piles)
        {
            sum += ceil((float)num / m); // can also use ceil((float)num/m) instead
        }
        if (sum <= h)
        {
            r = m;
        }
        else
        {
            l = m + 1;
        }
    }
    return l;
}

int main()
{
    // Test the minEatingSpeed function
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    int minSpeed = minEatingSpeed(piles, h);
    cout << "Minimum eating speed: " << minSpeed << endl;

    return 0;
}