#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(vector<vector<char>> &arr, int row, int col, int n)
{
    int row2 = row;
    int col2 = col;
    while (col2 >= 0)
    {
        if (arr[row2][col2] == 'Q')
        {
            return false;
        }
        col2--;
    }
    int i = row;
    int j = col;
    while (i >= 0 && j >= 0)
    {
        if (arr[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    int row1 = row;
    int col1 = col;
    while (row1 < n && col1 >= 0)
    {
        if (arr[row1][col1] == 'Q')
        {
            return false;
        }
        row1++;
        col1--;
    }
    return true;
}

void print(vector<vector<char>> &arr, int &n)
{
    for (auto i : arr)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void solve(vector<vector<char>> &arr, int col, int &n)
{
    if (col >= n)
    {
        print(arr, n);
        cout << endl;
        return;
    }
    for (int row = 0; row < n; row++)
    {
        if (isSafe(arr, row, col, n))
        {
            arr[row][col] = 'Q';
            solve(arr, col + 1, n);
            arr[row][col] = '-';
        }
    }
}

int main()
{
    vector<vector<char>> arr(4, vector<char>(4, '-'));
    int col = 0;
    int n = 4;
    solve(arr, col, n);

    return 0;
}