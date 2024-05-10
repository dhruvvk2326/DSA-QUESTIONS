
// #include <iostream>
// using namespace std;

// int nCr(int n, int r)
// {
//     long long res = 1;

//     // calculating nCr:
//     for (int i = 0; i < r; i++)
//     {
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// void pascalTriangle(int n)
// {
//     // printing the entire row n:
//     for (int c = 1; c <= n; c++)
//     {
//         cout << nCr(n - 1, c - 1) << " ";
//     }
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }

// Optimized code:

// #include <iostream>
// using namespace std;

// void pascalTriangle(int n)
// {
//     long long ans = 1;
//     cout << ans << " "; // printing 1st element

//     // Printing the rest of the part:
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans * (n - i);
//         ans = ans / i;
//         cout << ans << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n = 5;
//     pascalTriangle(n);
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

vector<int> generate_row(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(ans);
    for (int col = 1; col < row; col++)
    {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans;
    for (int i = 1; i <= numRows; i++)
    {
        ans.push_back(generate_row(i));
    }
    return ans;
}

int main()
{
    int n = 5;
    vector<vector<int>> triangle = generate(n);

    // Printing the Pascal's Triangle
    for (const auto &row : triangle)
    {
        for (const auto &num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}