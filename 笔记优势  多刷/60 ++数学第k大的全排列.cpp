#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
class Solution
{
public:
    // 这是我的思路。
    // 可以通过k和n-2*n-3 数值的关系来判断。这一层的数字是多少。
    // 然后递归的去算每一层。。
    // 这个思路感觉复杂度特别低 而且也是可以人为手算出来的。。不然我那个拿个例子试下。
    // 去尝试了下 5 20 发现对的。。
    // 判断第一层是什么 就是去看k-（n-1)!能减几次。。如果能减n次。那么他就在在目前层数的还没访问
    // 过的元素里面的低n+1个。
    // 没有人用这种方法做吗。
    // 有的。下面就是了。
    string getPermutation(int n, int k)
    {
        dfs(n - 1, k);
        return s;
    }
    string s;
    void dfs(int n, int k)
    {
        if (k > n - 1 * n)
        {
            int a = k / ((n - 1) * n);
            s += to_string(a);
            dfs(n - 1, k - ((n - 1) * n));
        }
        else
            s += "1";
    }
};
class Solution
{
public:
    string getPermutation(int n, int k)
    {
        vector<int> dp(n);
        dp[0] = 1;
        for (int i = 1; i < n; i++)
        {
            dp[i] = i * dp[i - 1];
        }
        k--;
        string ans;
        vector<int> nums(n);
        iota(nums.begin(), nums.end(), 1);
        while (n--)
        {
            int order = k / dp[n];
            ans.push_back(nums[order] + '0');
            for (int j = order; j < n; j++)
            {
                nums[j] = nums[j + 1];
            }
            k %= dp[n];
        }
        return ans;
    }
};

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        vector<int> factorial(n);
        factorial[0] = 1;
        for (int i = 1; i < n; i++)
        {
            factorial[i] = i * factorial[i - 1];
        }
        k--;
        // 这个用set 就不用k-1；
        string ans;
        vector<int> nums;
        for (int i = 1; i <= n; i++)
        {
            nums.push_back(i);
        }
        for (int i = 1; i <= n; i++)
        {
            int order = k / factorial[n - i];
            ans.push_back(nums[order] + '0');
            for (int j = order; j < n - i; j++)
            {
                nums[j] = nums[j + 1];
            }
            k %= factorial[n - i];
        }
        return ans;
    }
};
class Solution
{
public:
    string getPermutation(int n, int k)
    {
        int dp[n];
        dp[0] = 1;
        for (int i = 1; i < n; ++i)
            dp[i] = dp[i - 1] * i;
        string res;
        vector<int> nums(n);
        iota(nums.begin(), nums.end(), 1);
        while (n--)
        {
            int ord = k / dp[n];
            res.push_back(nums[ord] + '0');
            for (int j = ord; j < n - 1; ++j)
                nums[j] = nums[j + 1];
            k %= dp[n];
        }
        return res;
    }
};
string soso(int n, int k)

{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
#define all(nums) nums.begin(), nums.end()
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    string s;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
// 500起步。。这题可以刷2000 。太精彩了。。实用。
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> res(n);
    iota(res.begin(), res.end(), 1);
    string t;
    while (n--)
    {
        int ord = k / dp[n];
        t.push_back(res[ord] + '0');
        for (int j = ord; j < n; ++j)
            res[j] = res[j + 1];
        k %= dp[n];
    }
    return t;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1];
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
// ++nanti
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
// 2000值得。。。这题很多很有趣的细节。。我想要会的
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string t;
    while (n--)
    {
        int ord = k / dp[n];
        t.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return t;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        // 除以 就是取前面的部分
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
        // 取余就是取剩下的。。现在对这两个符号的搭配使用比较熟悉了。。
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int j = ord; j < n; ++j)
            nums[j] = nums[j + 1];
        k %= dp[n];
    }
    return s;
}

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        k--;
        int dp[n];
        dp[0] = 1;
        for (int i = 1; i < n; ++i)
            dp[i] = dp[i - 1] * i;
        vector<int> nums(n);
        iota(nums.begin(), nums.end(), 1);
        string s;
        while (n--)
        {
            int ord = k / dp[n];
            s.push_back(nums[ord] + '0');
            for (int j = ord; j < n; ++j)
                nums[j] = nums[j + 1];
            k %= dp[n];
        }
        return s;
    }
};
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    // 因为这里是第k个。。开始数量。对应的位次 就是序列。
    // 要转成序列号。。就是k-1
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
    }
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(nums.begin(), nums.end(), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
//以前写题解的是2-20年前的。
// 后面的写的人很少。。
// 他们很多都已经不在了
// 换我们去写题解吧。写后面的人少的题解。。
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] - '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        dp[i] = dp[i - 1] * i;
    }
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
// 原来觉得体量大的 刷成小的。。觉得小的。
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> res(n);
    iota(all(res), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(res[ord] + '0');
        for (int i = ord; i < n; ++i)
            res[i] = res[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 0; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    // 这个是阶层的生层方式。
    // 算是dp的性质的。。形成的过程复杂度较低。。
    // 用于一些算法备用的材料。
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    string s;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    string s;
    int dp[n];
    dp[1] = 1;
    for (int i = 2; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    // 这个是形成备用阶乘数组
    vector<int> nums(n);
    iota(all(nums), 1);
    // 这个是生成一个序列号号码牌。
    while (n--)
    {
        int ord = k / dp[n];
        // 取前面
        s.push_back(nums[ord] + '0');
        // 这个是加入到s里面
        // 下面是从nums里面删掉。。
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
        // 取半段
    }
    return s;
}
// 取一前段一后段。。一加一删 n递减。。这个小系统 还是很有规律的
// 取前段  取后端取前段  取后端取前段  取后端取前段  取后端取前段  取后端取前段  取后端
// 取前段  取后端 取前段  取后端取前段  取后端 取前段  取后端取前段  取后端取前段  取后端
// 取前段  取后端 取前段  取后端 取前段  取后端 取前段  取后端 取前段  取后端 取前段  取后端
// 熟练成肌肉记忆 ，，是什么为什么怎么实现，优缺点是什么。多思考。
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    string s;
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    string s;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    string s;
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
        for (int i = ord; i < n; ++i)
            nums[i] = nums[i + 1];
        k %= dp[n];
    }
    return s;
}
string soso(int n, int k)
{
    k--;
    string s;
    int dp[n];
    dp[0] = 1;
    for (int i = 1; i < n; ++i)
        dp[i] = dp[i - 1] * i;
    vector<int> nums(n);
    iota(all(nums), 1);
    while (n--)
    {
        int ord = k / dp[n];
        s.push_back(nums[ord] + '0');
    }
}