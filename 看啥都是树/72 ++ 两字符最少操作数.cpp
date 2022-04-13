#include <string>
using namespace std;
int minDistance(string word1, string word2)
{
    int n = word1.size();
    int m = word2.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i < n; ++i)
        dp[i][0] = i;
    for (int i = 0; i < m; ++i)
        dp[0][i] = i;
    for (int i = 1; i < n; ++i)
        for (int j = 1; j < m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = word1[i - 1] == word2[j - 1] ? dp[i - 1][j - 1] : dp[i - 1][j - 1] + 1;
            dp[i][j] = min(up, min(left, leftup));
        }
    return dp[n][m];
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = dp[i - 1][j - 1];
            if (a[i - 1] != b[i - 1])
                leftup = leftup + 1;
            dp[i][j] = min(up, min(leftup, left));
        }
    return dp[n][m];
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = dp[i - 1][j - 1];
            if (a[i - 1] != b[i - 1])
                leftup = leftup + 1;
            dp[i][j] = min(up, min(leftup, left));
        }
    return dp[n][m];
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = dp[i - 1][j - 1];
            if (a[i - 1] != b[i - 1])
                leftup = leftup + 1;
            dp[i][j] = min(up, min(leftup, left));
        }
    return dp[n][m];
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = dp[i - 1][j - 1];
            if (a[i - 1] != b[i - 1])
                leftup = leftup + 1;
            dp[i][j] = min(up, min(leftup, left));
        }
    return dp[n][m];
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = dp[i - 1][j - 1];
            if (a[i - 1] != b[i - 1])
                leftup = leftup + 1;
            dp[i][j] = min(up, min(leftup, left));
        }
    return dp[n][m];
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i)
        dp[i][0] = i;
    for (int i = 0; i <= m; ++i)
        dp[0][i] = i;
    for (int i = 0; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            int up = dp[i][j - 1] + 1;
            int left = dp[i - 1][j] + 1;
            int leftup = dp[i - 1][j - 1];
            if (a[i - 1] != b[i - 1])
                leftup = leftup + 1;
            dp[i][j] = min(up, min(left, leftup));
        }
    return dp[n][m];
}
