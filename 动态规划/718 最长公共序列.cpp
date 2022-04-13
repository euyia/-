#include <all.h>
using namespace std;
// 求两个最长公共序列的。。两个数组
// 比如 [1,2,3,2,1]
// [3,2,1,4,7]
// 最长相同就是 3 2 1
class Solution
{
public:
    int findLength(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        int dp[1001][1001]{0, 0};
        for (int i = 0; i < n; ++i)
        {
            dp[i][0] = a[0] == b[i] ? 1 : 0;
            dp[0][i] = b[0] == a[i] ? 1 : 0;
        }
        int maxt = 0;
        for (int i = 1; i < n; ++i)
            for (int j = 1; j < n; ++j)
                if (a[i] == b[j])
                    if (dp[i - 1][j - 1])
                    {

                        dp[i][j] = dp[i - 1][j - 1] + 1;
                        maxt = max(maxt, dp[i][j]);
                    }

        return maxt;
    }
};
int find(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    int dp[1001][1001];
    int maxt = 0;
    for (int i = 0; i < n; ++i)
        dp[0][i] = b[0] == a[i] ? 1 : 0;
    for (int j = 0; j < m; ++j)
        dp[j][0] = b[j] == a[0] ? 1 : 0;
    for (int i = 1; i < n; ++i)
        for (int j = 1; j < m; ++j)
        {
            if (a[i] == b[j])
            {

                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxt = max(maxt, dp[i][j]);
            }
        }
    return maxt;
}

class Solution
{
public:
    int dp[5][5];
    int findLength(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        int m = b.size();
        int maxt = 0;
        for (int i = 0; i < n; ++i)
            dp[0][i] = b[0] == a[i] ? 1 : 0;
        for (int j = 0; j < m; ++j)
            dp[j][0] = b[j] == a[0] ? 1 : 0;
        for (int i = 1; i < n; ++i)
            for (int j = 1; j < m; ++j)
            {
                if (a[i] == b[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                maxt = max(maxt, dp[i][j]);
            }
        return maxt;
    }
};
// [0,0,0,0,1]
// [1,0,0,0,0]
// 这个例子过不去。。调试 不好找。
// 有空再看吧。。框架有了。？？？？？？？？
// 上面有统一处理的方法了。i-1<0||j-1<0