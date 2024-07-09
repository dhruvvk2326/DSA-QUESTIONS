// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int helper(vector<vector<int>> &arr, int &n)
// {
//     int i = 0, j = n - 1;
//     while (i < j)
//     {
//         if (arr[j][i] == 1)
//         {
//             j--;
//         }
//         else
//         {
//             i++;
//         }
//     }
//     int candidate = i;
//     for (i = 0; i < n; i++)
//     {
//         if (i != candidate)
//         {
//             if (arr[i][candidate] == 0 || arr[candidate][i] == 1)
//                 return -1;
//         }
//     }
//     return candidate;
// }

// int main()
// {
//     vector<vector<int>> arr = {{0, 0, 1, 0},
//                                {0, 0, 1, 0},
//                                {0, 0, 0, 0},
//                                {0, 0, 1, 0}};

//     int n = arr[0].size();
//     cout << helper(arr, n);
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

bool knows(int a, int b, int n, vector<vector<int>> &arr)
{
    if (arr[a][b] == 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    vector<vector<int>> arr = {{0, 0, 1, 0},
                               {0, 0, 1, 0},
                               {0, 0, 0, 0},
                               {0, 0, 1, 0}};

    stack<int> st;
    int n = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        st.push(i);
    }
    while (st.size() > 1)
    {
        int a = st.top();
        st.pop();
        int b = st.top();
        st.pop();
        if (knows(a, b, n, arr))
        {
            st.push(b);
        }
        else
        {
            st.push(a);
        }
    }
    cout << st.top();
    return 0;
}