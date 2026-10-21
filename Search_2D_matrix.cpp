#include <bits/stdc++.h>
using namespace std;

// bool searchMatrix(vector<vector<int>> &matrix, int target)
// {
//     int rows = matrix.size();
//     int cols = matrix[0].size();

//     int left = 0;
//     int right = rows * cols - 1;

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         int row = mid / cols;
//         int col = mid % cols;

//         int value = matrix[row][col];
//         if (value == target)
//         {
//             return true;
//         }
//         else if (value < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     return false;
// }
vector<int> searchMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    int left = 0;
    int right = rows * cols - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        int row = mid / cols;
        int col = mid % cols;

        int value = matrix[row][col];

        if (value == target)
        {
            return {row, col};
        }
        else if (value < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> a = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 10;

    vector<int> ans = searchMatrix(a, target);
    // bool ans = searchMatrix(a, target);
    // cout << ans;
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}