#include <bits/stdc++.h>
using namespace std;

// Approach - 1 (not good but mine)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    // search row linearly.
    for (int i = 0; i < m; i++)
    {
        int low = 0, high = n - 1;
        // search column using binary search.
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (matrix[i][mid] == target)
                return true;
            else if (matrix[i][mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return false;
}

// Approach - 2 (somewhat better not best)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // start from 1st element of last row.
    int i = matrix.size() - 1, j = 0;
    while (i >= 0 && j < matrix[0].size())
    {
        // target found.
        if (matrix[i][j] == target)
            return true;
        // if element is grater than target go 1 row upwards.
        if (matrix[i][j] > target)
            i--; // move up
        // if element is smaller than target check next element.
        else
            j++; // move right
    }
    return false;
}

// Approach - 3 (binary search variaation)
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int m = matrix.size(), n = matrix[0].size();
    // start from last element of 1st row
    int row = 0, col = n - 1;
    while (row < m && col >= 0)
    {
        // target found
        if (matrix[row][col] == target)
            return true;
        // if element is greater check previous element.
        else if (matrix[row][col] > target)
            col--;
        // if element smaller check next row.
        else
            row++;
    }
    return false;
}