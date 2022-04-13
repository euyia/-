#include <all.h>
using namespace std;
class Solution
{
private:
    bool back_trace(vector<vector<char>> &board, int row, int col)
    {
        if (row >= 9)
            return true;

        int next_row = row;
        int next_col = col + 1;
        if (col == 8)
        {
            next_row++;
            next_col = 0;
        }
        if (board[row][col] != '.')
            return back_trace(board, next_row, next_col);

        bool used[9] = {0};
        for (int i = 0; i < 9; i++)
        {
            if (board[row][i] != '.')
                used[(int)(board[row][i] - '1')] = true;
            // 这个-'1'就非常灵性。平时都是-0 这里因为是从1 开始 其实就是偏移了1.。
            if (board[i][col] != '.')
                used[(int)(board[i][col] - '1')] = true;
            // 这个应该就是小方格的判断。。这题其实核心是这个。
            // 就像n皇后。核心是那个斜线的visit一样。。和差为常量。。
            // ？？？？？？？、回头看吧。。这种不是什么新鲜的框架
            if (board[row / 3 * 3 + i / 3][col / 3 * 3 + i % 3] != '.')
                used[(int)(board[row / 3 * 3 + i / 3][col / 3 * 3 + i % 3] - '1')] = true;
        }

        for (int i = 0; i < 9; i++)
        {
            if (used[i])
                continue;

            board[row][col] = '1' + (char)(i);
            if (back_trace(board, next_row, next_col))
                return true;
            board[row][col] = '.';
        }
        return false;
    }

public:
    void solveSudoku(vector<vector<char>> &board)
    {
        back_trace(board, 0, 0);
    }
};
// 这个应该就是小方格的判断。。这题其实核心是这个。
// 就像n皇后。核心是那个斜线的visit一样。。和差为常量。。
// ？？？？？？？、回头看吧。。这种不是什么新鲜的框架