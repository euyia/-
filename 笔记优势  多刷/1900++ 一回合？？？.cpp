#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    vector<int> earliestAndLatest(int n, int a, int b)
    {
        // 应该是一个模拟。。
        // 因为没办法去直接概括出来。。
        //
        // 准备两套递归？？
        // 判断靠左还是靠右。
        // 如果靠右 就都让其他的数取一遍。。
        // 如果要尽量早 就要尽可能让数 放在中间取余把他们往两边隔开。
        nums.resize(n);
        iota(nums.begin(), nums.end(), 1);
        dfs(a, b, n, 0);
        return {cnt, 4};
    }
    vector<int> nums;
    bool ok(int a, int b, int n)
    {
        return a + b == n + 1;
    }
    int cnt = 0;
    bool flag = false;
    void dfs(int a, int b, int n, int sum)
    {
        if (flag)
            return;
        if (ok(a, b, n))
        {
            cnt == sum;
            flag = true;
            return;
        }
        vector<int> res;
        if ((a + b) / 2 >= n / 2)
        {
            for (int i = 0; i < n / 2; ++i)
            {
                if (nums[n - i - 1] == a)
                    res.push_back(a);
                else if (nums[n - 1 - i] == b)
                    res.push_back(b);
                else
                    res.push_back(nums[i]);
            }
        }
        else
        {
            for (int i = n - 1; i > n / 2; --i)
            {
                if (nums[n - i - 1] == a)
                    res.push_back(a);
                else if (nums[n - 1 - i] == b)
                    res.push_back(b);
                else
                    res.push_back(nums[i]);
            }
        }
        if (n % 2 == 1)
            res.push_back(nums[n / 2 + 1]);
        sort(res.begin(), res.end());
        nums = res;
        dfs(a, b, nums.size(), sum + 1);
    }
};
// 我们要记录的是位置。。
// 我们又要一直动态的去寻找他的位置。
// 因为我们这样模拟的过程中 ，会乱掉。。
// 这个角度不好？？？？？
// 而且他不一定是对的。
// 怎么样的角度去概括他的符合条件的核心特点。。
// 这个是关键。

class Solution
{
private:
    int F[30][30][30], G[30][30][30];

public:
    pair<int, int> dp(int n, int f, int s)
    {
        if (F[n][f][s])
        {
            return {F[n][f][s], G[n][f][s]};
        }
        if (f + s == n + 1)
        {
            return {1, 1};
        }

        // F(n,f,s)=F(n,n+1-s,n+1-f)
        if (f + s > n + 1)
        {
            tie(F[n][f][s], G[n][f][s]) = dp(n, n + 1 - s, n + 1 - f);
            return {F[n][f][s], G[n][f][s]};
        }

        int earlist = INT_MAX, latest = INT_MIN;
        int n_half = (n + 1) / 2;

        if (s <= n_half)
        {
            // 在左侧或者中间
            for (int i = 0; i < f; ++i)
            {
                for (int j = 0; j < s - f; ++j)
                {
                    auto tmp = dp(n_half, i + 1, i + j + 2);
                    int x = tmp.first, y = tmp.second;
                    earlist = min(earlist, x);
                    latest = max(latest, y);
                }
            }
        }
        else
        {
            // s 在右侧
            // s'
            int s_prime = n + 1 - s;
            int mid = (n - 2 * s_prime + 1) / 2;
            for (int i = 0; i < f; ++i)
            {
                for (int j = 0; j < s_prime - f; ++j)
                {
                    auto tmp = dp(n_half, i + 1, i + j + mid + 2);
                    int x = tmp.first, y = tmp.second;
                    earlist = min(earlist, x);
                    latest = max(latest, y);
                }
            }
        }

        return {F[n][f][s] = earlist + 1, G[n][f][s] = latest + 1};
    }

    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer)
    {
        memset(F, 0, sizeof(F));
        memset(G, 0, sizeof(G));

        // F(n,f,s) = F(n,s,f)
        if (firstPlayer > secondPlayer)
        {
            swap(firstPlayer, secondPlayer);
        }
        auto tmp = dp(n, firstPlayer, secondPlayer);
        return {tmp.first, tmp.second};
    }
};
// 数学是对这个世界的抽象。是一种正面的尝试。
// 如果你觉得数学难。。那这个世界就更难了。
class Solution
{
    typedef struct node
    {
        int min, max;
        node() : min(0), max(0){};
        node(int min, int max) : min(min), max(max){};
    } pair;
    pair dp[30][30][30];
    pair ans;

public:
    vector<int> earliestAndLatest(int n, int a, int b)
    {
        auto res = dfs(n, a - 1, b - 1);
        return {res.min, res.max};
    }
    pair dfs(int n, int a, int b)
    {
        if (a + b == n - 1)
            return {1, 1};
        if (a >= n - 1 - a || a > n - 1 - b)
            int tmp = a,
                a = n - 1 - b, b = n - 1 - tmp;
        auto dv = &dp[n][a][b];
        if (dv->min > 0)
            return *dv;
        // 这go 有点难抄啊。。。不行就先弄清楚。然后自己实现吧。
        *dv = ans;
        pair next;
        ans.min = 1e9;
        int mid = (n + 1) / 2;
        for (int i = 0; i <= a; ++i)
        {
            for (int j = 0; j < min(b, n - 1 - b); j++)
            {
                //   这边先试下用api的min 不行的话再自定义
                if (b < mid)
                    next = dfs(mid, i, i + j + 1);
                else
                    next = dfs(mid, i, i + j + 1 + (b * 2 - n + 1) / 2);
                ans.min = min(ans.min, next.min);
                ans.max = max(ans.max, next.max);
            }
        }
        ans.min++;
        ans.max++;
        // 这是全局的吗。？？？？？这个ans 应该是吧 他就是这样一直统计。
        return dp[n][a][b] = {ans.min, ans.max};
    }
};

func earliestAndLatest(n, firstPlayer, secondPlayer int)[] int
{
    type pair struct
    {
        min, max int } // 最早回合数和最晚回合数
	dp := make([][][]pair, n+1)
	for i := range dp
    {
        dp[i] = make([][]pair, n)
		for j := range dp[i]
        {
            dp[i][j] = make([] pair, n)
        }
    }
    var f func(n, fi, se int) pair
        f = func(n, fi, se int)(ans pair)
    {
        if fi
            +se == n - 1
            { // 发生比拼
                return pair { 1, 1 }
            }
        if fi >= n-1-fi || fi > n-1-se { // 为简化后续枚举过程，在枚举前处理一下两名选手的位置
			fi, se = n-1-se, n-1-fi
		}
		dv := &dp[n][fi][se]
		if dv.min > 0 {
			return *dv
		}
		defer func() { *dv = ans }()
		ans.min = 1e9
		mid := (n + 1) / 2 // 下一轮人数
		var next pair
		for i := 0;
        i <= fi;
        i++
        { // 枚举第一名选手左侧保留多少个人
            for
            j:
                = 0;
            j < min(se, n - 1 - se) - fi;
            j++
            { // 枚举第一名选手和第二名选手中间保留多少个人
                if se
                    < mid
                    { // 两人同侧（处理位置后都位于中间位置左侧）
                        next = f(mid, i, i + j + 1)
                    }
                else
                { // 两人异侧
                    next = f(mid, i, i + j + 1 + (se * 2 - n + 1) / 2)
                }
                ans.min = min(ans.min, next.min)
                              ans.max = max(ans.max, next.max)
            }
        }
        // 加上当前回合数
        ans.min++ ans.max++ return
    }
res:
    = f(n, firstPlayer - 1, secondPlayer - 1) // 下标从 0 开始
        return [] int
    { res.min, res.max }
}

func min(a, b int) int
{
    if a
        < b
        {
            return a
        }
    return b
}

func max(a, b int) int
{
    if a
        > b
        {
            return a
        }
    return b
}
// 第一回合没拿下来。。
// 赚到一句话。 就是多思考 怎么做。。尽量不要思考 为什么这么做。难题就是这样。。
// 先能实现。
// 他这里主要是 零神那个可以。然后。其实也没啥深度。+记忆化搜索。
// 冲大题。
// 这题自己也模拟了。。其实主要1 要统一 a b 所指的位置。
// 今后对ab居于不同的位置进行分类。处理。。仅此而已。
// 没啥思考深度的。。不要被官解给吓唬了。。
// 一定有某个角度去理解。概括 会非常舒服的。
// 到时候我给他找出来 通过各种提交区答案的对比。然后
// 我自己再写个题解。。美滋滋。。