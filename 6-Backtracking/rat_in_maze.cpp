#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isSafe(int arr[][4], vector<vector<bool>> &visited, int row, int col, int i, int j)
{
  if ((arr[i][j] == 1) && (visited[i][j] == false) && (i >= 0 && i < row) && (j >= 0 && j < col))
  {

    return true;
  }
  return false;
}

void solve(int arr[][4], vector<vector<bool>> &visited, vector<string> &path,
           string &current_path, int row, int col, int i, int j)
{
  if (i == row - 1 && j == col - 1)
  {
    path.push_back(current_path);
    return;
  }

  // DOWN
  if (isSafe(arr, visited, row, col, i + 1, j))
  {
    visited[i + 1][j] = true;
    current_path.push_back('D');
    solve(arr, visited, path, current_path, row, col, i + 1, j);
    visited[i + 1][j] = false;
    current_path.pop_back();
  }

  if (isSafe(arr, visited, row, col, i, j - 1))
  {
    visited[i][j - 1] = true;

    current_path.push_back('L');
    solve(arr, visited, path, current_path, row, col, i, j - 1);
    visited[i][j - 1] = false;
    current_path.pop_back();
  }

  if (isSafe(arr, visited, row, col, i - 1, j))
  {
    visited[i - 1][j] = true;

    current_path.push_back('U');
    solve(arr, visited, path, current_path, row, col, i - 1, j);
    visited[i - 1][j] = false;
    current_path.pop_back();
  }

  if (isSafe(arr, visited, row, col, i, j + 1))
  {
    visited[i][j + 1] = true;

    current_path.push_back('R');
    solve(arr, visited, path, current_path, row, col, i, j + 1);
    visited[i][j + 1] = false;
    current_path.pop_back();
  }
}

int main()
{

  int arr[4][4] = {{1, 0, 0, 0},
                   {1, 1, 0, 0},
                   {0, 1, 1, 0},
                   {0, 1, 1, 1}};

  vector<vector<bool>> visited(4, vector<bool>(4, false));
  visited[0][0] = true;
  int row = 4;
  int col = 4;
  int i = 0;
  int j = 0;
  vector<string> path;
  string current_path = "";
  solve(arr, visited, path, current_path, row, col, i, j);
  for (auto i : path)
  {
    cout << i << "  ";
  }
  return 0;
}