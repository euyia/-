#include <all.h>
using namespace std;
// 而且状态转移方程也比较简单： dp(step,i,j)=dp(step-1,i-1,j-2)+dp(step-1,i-2,j-1)+...+dp(step-1,i+2,j-1)+dp(step-1,i+1,j-2)
// 不简单的。
// 他虽然是很普通的转移方式。。但是也不能这样一笔带过。。
dp[r][c] = 1;
//这种步数有关的。就是上一步的所有可能概率和。。
//这种步数有关的。就是上一步的所有可能概率和。。
//这种步数有关的。就是上一步的所有可能概率和。。
//这种步数有关的。就是上一步的所有可能概率和。。
//这种步数有关的。就是上一步的所有可能概率和。。
double DP(int N, int K, int i, int j)
{
    vector<vector<vector<double>>> dp(K + 1, vector<vector<double>>(N, vector<double>(N, 0))); //根据上面的递归函数，我们知道，只需要3个参数，就可以获得答案
    dp[0][i][j] = 1;                                                                           //这个三维矩阵，其实就是dp[step][i][j]的形式。所以在一步都没走的情况下，在i，j的位置概率为1.
    for (int s = 1; s <= K; s++)
    { //一个简单的动态规划,每一步的状态都依赖于前一步状态。
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
            {
                double D1 = (i >= 1 && j >= 2) ? dp[s - 1][i - 1][j - 2] : 0;
                double D2 = (i >= 2 && j >= 1) ? dp[s - 1][i - 2][j - 1] : 0;
                double D3 = (i >= 2 && j < N - 1) ? dp[s - 1][i - 2][j + 1] : 0;
                double D4 = (i >= 1 && j < N - 2) ? dp[s - 1][i - 1][j + 2] : 0;
                double D5 = (i < N - 1 && j >= 2) ? dp[s - 1][i + 1][j - 2] : 0;
                double D6 = (i < N - 2 && j >= 1) ? dp[s - 1][i + 2][j - 1] : 0;
                double D7 = (i < N - 2 && j < N - 1) ? dp[s - 1][i + 2][j + 1] : 0;
                double D8 = (i < N - 1 && j < N - 2) ? dp[s - 1][i + 1][j + 2] : 0;
                dp[s][i][j] = (D1 + D2 + D3 + D4 + D5 + D6 + D7 + D8) / 8.0;
            }
    }
    double res = 0; //这里的答案就是要求出最后一步，落在棋盘上各个位置上概率的总和
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            res += dp[K][i][j];
        }
    return res;
}
double getres(int N, int K, int step, int i, int j)
{
    if (i > N - 1 || j > N - 1 || i < 0 || j < 0)
        return 0; //先判断坐标值是否越界，若越界直接返回0
    if (step == K)
        return 1; //若已经走了K步，并且是在棋盘上的，那么直接返回1
    double res = 0;
    // 这个就是往各种可能的子问题去递归。。这个看着很多 其实没啥。
    // res用来记录在当前状态下，即已经走了step步数，并且到达i，j的情况下，棋子在棋盘上的概率
    res += getres(N, K, step + 1, i - 1, j - 2); //递归地走每一条子路径
    res += getres(N, K, step + 1, i - 2, j - 1);
    res += getres(N, K, step + 1, i - 2, j + 1);
    res += getres(N, K, step + 1, i - 1, j + 2);
    res += getres(N, K, step + 1, i + 1, j + 2);
    res += getres(N, K, step + 1, i + 2, j + 1);
    res += getres(N, K, step + 1, i + 2, j - 1);
    res += getres(N, K, step + 1, i + 1, j - 2);
    return res / 8.0; //返回概率
}
class Solution
{
public:
    double knightProbability(int n, int k, int r, int c)
    {
        // 估计是状态压缩。。
        // 状态压缩回头去弄下。。像并查集 对那个东西有点过于铭感了。。
        vector<vector<double>> dp(n, vector<double>(n, 0));
        dp[r][c] = 1;
        // 是通过这样来初始化 。。
        vector<vector<double>> pre;
        //他好像是要初始化为1吧
        for (int a = 0; a < k; ++a)
        {
            pre = dp;
            // 只有vector才能用迭代器。只有vector才能这样简单的赋值。
            // 初始值在这里 怎么遍历。。？？？
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    double d1 = (i >= 1 && j >= 2) ? pre[i - 1][j - 2] : 0;
                    double d2 = (i >= 1 && j < n - 2) ? pre[i - 1][j + 2] : 0;
                    double d3 = (i >= 2 && j < n - 1) ? pre[i - 2][j + 1] : 0;
                    double d4 = (i < n - 2 && j >= 1) ? pre[i + 2][j - 1] : 0;
                    double d5 = (i < n - 1 && j >= 2) ? pre[i + 1][j - 2] : 0;
                    double d6 = (i < n - 1 && j < n - 2) ? pre[i + 1][j + 2] : 0;
                    double d7 = (i < n - 2 && j < n - 1) ? pre[i + 2][j + 1] : 0;
                    double d8 = (i >= 2 && j >= 1) ? pre[i - 2][j - 1] : 0;
                    dp[i][j] = (d1 + d2 + d3 + d4 + d5 + d6 + d7 + d8) / 8.0;
                }
            }
        }
        double res = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                res += dp[i][j];
        return res;
    }
};