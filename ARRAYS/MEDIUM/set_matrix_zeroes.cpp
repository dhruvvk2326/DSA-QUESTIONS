// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// void setZeroes(vector<vector<int>> &matrix)
// {
//     int n = matrix.size();
//     int m = matrix[0].size();
//     unordered_set<int> setRows;
//     unordered_set<int> setColumns;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 setRows.insert(i);
//                 setColumns.insert(j);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (setRows.count(i) > 0 || setColumns.count(j) > 0)
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }
// }

// int main()
// {
//     // Test the setZeroes function
//     vector<vector<int>> matrix = {
//         {1, 1, 1},
//         {1, 0, 1},
//         {1, 1, 1}};

//     cout << "Original Matrix:" << endl;
//     for (const auto &row : matrix)
//     {
//         for (const auto &num : row)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     setZeroes(matrix);

//     cout << "Modified Matrix:" << endl;
//     for (const auto &row : matrix)
//     {
//         for (const auto &num : row)
//         {
//             cout << num << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // mark i-th row:
                matrix[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                // check for col & row:
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    // step 3: Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

int main()
{
    // Test the setZeroes function
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};

    cout << "Original Matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (const auto &num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    setZeroes(matrix);

    cout << "Modified Matrix:" << endl;
    for (const auto &row : matrix)
    {
        for (const auto &num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}