#include <all.h>
using namespace std;
// dp 定义的每个值。。就是这个自然树 所能拿到的最优解 。也就是最少个数。
// 这样就可以理解了。。比如5=1+2*2.。也就是dp[1]+一个4嘛。。
// 后面的2*2 说明他是一个平方数。就说明可以一个数来代替。
class Solution
{
public:
    int numSquares(int n)
    {
        vector<int> dp(n + 1);
        for (int i = 1; i < n + 1; ++i)
        {
            dp[i] = i;
            for (int j = 1; i - j * j >= 0; ++j)
                // 这边为什么是大于等于0.然后下面为什么不是dp【j]+1 ....
                // 框架简单。。 有空模拟下吧 。
                dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
        return dp[n];
    }
};
// 又一个奇葩的解法。。 动态规划 有时候 总是有很多牛逼的。。。这速度最快的 。
// 这是一个数学定理的运用。。
// 四平方和定义。。就是一个数最多拆分成四个树的平和的和。。
// 而且排除一个特例。。7有关的。。之外。。只要三个。。
// 排除 本身就是平方树。。。1
// 排除 是两个平方数之和。。2个的。
// 剩下的都是三个。。。。
// 。。牛逼 。。
class Solution
{
public:
    bool isPerfectSquare(int x)
    {
        int y = sqrt(x);
        return y * y == x;
    }
    bool isAnswer4(int x)
    {
        // 这步写法很牛逼。。
        while (x % 4 == 0)
            x /= 4;
        return x % 8 == 7;
    }

    int numSquares(int n)
    {
        if (isPerfectSquare(n))
            return 1;
        if (isAnswer4(n))
            return 4;
        // 这个2的判断的写法很很简约 牛逼。。
        for (int i = 1; i * i < n; i++)
        {
            if (isPerfectSquare(n - i * i))
                return 2;
        }
        return 3;
    }
};

class Solution
{
public:
    int numSquares(int n)
    {
        int dp[10001];
        for (int i = 0; i < n + 1; ++i)
        {
            dp[i] = i;
            for (int j = 1; i - j * j >= 0; ++j)
                dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
        return dp[n];
    }
};
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 1; i < n + 1; i++)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
// =0 是刚好完全平方数。。是dp[0]+1;
// 所以i要从0开始 因为会用到。。
// 那个数学写法理解了。。但是感觉不具有普遍适用性。。可以刷2 排除的那个写法。也是很nice
bool isprefect(int n)
{
    int y = sqrt(n);
    return y * y == n;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
bool kk(int n)
{
    for (int i = 1; i * i < n; ++i)
        if (isprefect(n - i * i))
            return true;
    return false;
}
// 这两个小的判断bool的函数还是思路挺好的。。
//
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10011];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[10001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; i++)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
int soso(int n)
{
    int dp[1001];
    for (int i = 0; i < n + 1; ++i)
    {
        dp[i] = i;
        for (int j = 1; i - j * j >= 0; ++j)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
    return dp[n];
}
// 自己的思路是自己刷开辟出来的。。
// 不是看出来 旁观出来的。
// 血战。。