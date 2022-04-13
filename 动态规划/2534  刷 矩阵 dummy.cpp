#include <all.h>
using namespace std;
// 偏离可以统一处理。就像链表的头结点一样。。。所有都能统一写。非常方便的。
//     你没有偏离的话。倒是后肯定要i-1 这种操作。。很麻烦的。。特别是这种多层遍历的。
// 越多层 你如果要单独处理。。边界情况也是指数级增长。。
class Solution
{
public:
    vector<int> getMaxMatrix(vector<vector<int>> &matrix)
    {
        int n = matrix.size(), m = matrix[0].size();
        //二维前缀和
        long long preSum[n + 1][m + 1];
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                preSum[i][j] = matrix[i - 1][j - 1] + preSum[i - 1][j] + preSum[i][j - 1] - preSum[i - 1][j - 1];
            }
            // 偏离要适应的。。pre的i相当于nums的i-1位置。
            // 这样子才能把n-1位置的对应到n去。
            // 偏离可以统一处理。就像链表的头结点一样。。。所有都能统一写。非常方便的。
        }
        //开始最大子序和
        int gobalMax = INT_MIN;
        vector<int> ret(4, 0);
        //先固定上下两条边
        for (int top = 0; top < n; top++)
        {
            for (int bottom = top; bottom < n; bottom++)
            {
                int localMax = 0, left = 0;
                //然后从左往右一遍扫描找最大子序和
                for (int right = 0; right < m; right++)
                {
                    //利用presum快速求出localMax
                    localMax = preSum[bottom + 1][right + 1] + preSum[top][left] - preSum[bottom + 1][left] - preSum[top][right + 1];
                    //如果比gobal大，更新
                    if (gobalMax < localMax)
                    {
                        gobalMax = localMax;
                        ret[0] = top;
                        ret[1] = left;
                        ret[2] = bottom;
                        ret[3] = right;
                    }
                    //如果不满0，前面都舍弃，从新开始计算，left更新到right+1，right下一轮递增之后left==right
                    if (localMax < 0)
                    {
                        localMax = 0;
                        left = right + 1;
                    }
                }
            }
        }
        return ret;
    }
};

class Solution
{
public:
    vector<int> getMaxMatrix(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i < n; ++i)
            for (int j = 1; j < m; ++j)
                dp[i][j] = dp[i][j - 1] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
        vector<int> res(4);
        int maxt = INT_MIN;
        // left是有效的左边界。
        // right相当于i无论什么情况的都一直往右走。
        // 如果tmp已经小于0了
        // left会跟过来。。记录的起始点会发生变化。。right 是一直往前走的。。
        for (int top = 0; top < n; ++top)
            for (int down = top; down < n; ++down)
            {
                int left = 0, tmp = 0;
                for (int right = 0; right < m; ++right)
                {
                    tmp = dp[down + 1][right + 1] + dp[top][left] - dp[top][right + 1] - dp[down + 1][left];
                    // 只有right 和down能+1！！哈哈掌握了这个技巧了
                    // 其实top和down本来指的是同一个地方。。但是为了算法写法的统一。
                    // 他这里top和down是一样的。但是它通过写法 +1。来实现算法需要的区别度
                    if (tmp > maxt)
                    {
                        res[0] = top;
                        res[1] = left;
                        res[2] = down;
                        res[3] = right;
                        maxt = tmp;
                    }
                    if (tmp < 0)
                    {
                        left = right + 1;
                        tmp = 0;
                    }
                }
            }
        return res;
    }
};
vector<int> getMaxMatrix(vector<vector<int>> &nums)
{
    // 怎么写其实不重要。。只要你知道你自己在写什么。。
    int n = nums.size();
    // n就是行数。就是子数组的数量。。矩阵和内容vector嵌套形式就统一了。
    int m = nums[0].size();
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = 0;
    vector<int> res(4);
    for (int top = 0; top < n; ++top)
        for (int dow = top; dow < n; ++dow)
        {
            int tmp = 0, left = 0;
            for (int right = 0; right < n; ++right)
            {
                tmp = dp[dow + 1][right + 1] + dp[top][left] - dp[top][right + 1] - dp[dow + 1][left];

                if (maxt < tmp)
                {
                    maxt = tmp;
                    res[0] = top;
                    res[1] = left;
                    res[2] = dow;
                    res[3] = right;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    left = right + 1;
                }
            }
        }
    return res;
}
struct pair_hash
{
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2> &p) const
    {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ h2;
    }
};
// unordered_map<pair<int, int>, int, pair_hash> dp;
// vector<int> getMaxMatrix(vector<vector<int>> &nums)
// {
//     int n = nums.size();
//     int m = nums[0].size();
//     for (int i = 0; i < n; ++i)
//         for (int j = 0; j < m; ++j)
//             dp[{i, j}] = dp[{i - 1, j}] + dp[{i, j - 1}] - dp[{i - 1, j - 1}] + nums[i][j];
//     //因为到时候要用到-1 节点也就是dp里面的0
//     // 所以这里nums就偏移一个位置 放到dp里的i+1位置。
//     // 主要是dp-1他不能有值。。不然就直接放到-1去了。。
//     // 用哈希表啊。。我擦。。
//     int maxt = INT_MIN;
//     vector<int> res(4);
//     for (int top = 0; top < n; ++top)
//         for (int down = top; down < n; ++down)
//         {
//             int left = 0, tmp = 0;
//             for (int right = 0; right < m; ++right)
//             {
//                 tmp = dp[{down, right}] + dp[{top - 1, left - 1}] - dp[{top - 1, right}] - dp[{down, left - 1}];
//                 if (maxt < tmp)
//                 {
//                     maxt = tmp;
//                     res[0] = top;
//                     res[1] = left;
//                     res[2] = down;
//                     res[3] = right;
//                 }
//                 if (tmp < 0)
//                 {
//                     tmp = 0;
//                     left = right + 1;
//                 }
//             }
//         }
//     return res;
// }
unordered_map<int, int> dp;
vector<int> getMaxMatrix(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            dp[i * n + j] = dp[(i - 1) * n + j] + dp[i * n + j - 1] - dp[(i - 1) * n + j - 1] + nums[i][j];
        }
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int top = 0; top < n; ++top)
        for (int down = top; down < n; ++down)
        {
            int tmp = 0, left = 0;
            for (int right = 0; right < m; ++right)
            {
                tmp = dp[down * n + right] + dp[(top - 1) * n + left - 1] - dp[(top - 1) * n + right] - dp[down * n + left - 1];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = top;
                    res[1] = left;
                    res[2] = down;
                    res[3] = right;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    left = right + 1;
                }
            }
        }
    return res;
}
// 这偏移转成一维度的不行。。换成1 也不行。。
vector<int> getMaxMatrix(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t; b < n; ++b)
        {
            int l = 0, tmp = 0;
            for (int r = 0; r < m; ++r)
            {
                tmp = dp[b + 1][r + 1] + dp[t][l] - dp[b + 1][l] - dp[t][r + 1];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b;
                    res[3] = r;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r + 1;
                }
            }
        }
    return res;
}
vector<int> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t; b < n; ++b)
        {
            int tmp = 0, l = 0;
            for (int r = 0; r < m; ++r)
            {
                tmp = dp[t][l] + dp[b + 1][r + 1] - dp[t][r + 1] - dp[b + 1][r + 1];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b;
                    res[3] = r;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r + 1;
                }
            }
        }
    return res;
}
// 里面有挺多细节的 无穷无尽的细节。
// 都是要平时去练的。。
// 就像跑车。。套路虽然好。。但是套路最好熟悉到能忘记。。
vector<int> getMaxMatrix(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    long dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t + 1; b < n; ++b)
        {
            int tmp = 0, l = 0;
            for (int r = 1; r < m; ++r)
            {
                tmp = dp[b][r] + dp[t][l] - dp[t][r] - dp[b][l];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b - 1;
                    res[3] = r - 1;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r;
                }
            }
        }
    return res;
}
// 你用什么数组就用哪套坐标系。。
// 保持坐标系 和所有的 数组是一个体系的。。一致性。。
vector<int> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums.size();
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t + 1; b < n + 1; ++b)
        {
            int l = 0, tmp = 0;
            for (int r = 1; r < m + 1; ++r)
            {
                tmp = dp[t][l] + dp[b][r] - dp[b][l] - dp[t][r];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b - 1;
                    res[3] = r - 1;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r;
                    // 改了之后这里就是r不是r+1;
                }
            }
        }
    return res;
}
vector<int> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t + 1; b < n + 1; ++b)
        {
            int tmp = 0, l = 0;
            for (int r = 1; r < m + 1; ++r)
            {
                tmp = dp[t][l] + dp[b][r] - dp[t][r] - dp[b][l];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b - 1;
                    res[3] = r - 1;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r;
                }
            }
        }
    return res;
}
vector<int> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
        }
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t + 1; b < n + 1; ++b)
        {
            int tmp = 0, l = 0;
            for (int r = 1; r < m + 1; ++r)
            {
                tmp = dp[t][l] + dp[b][r] - dp[b][l] - dp[t][r];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b - 1;
                    res[3] = r - 1;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r;
                }
            }
        }
    return res;
}
vector<int> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    int dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + nums[i - 1][j - 1] - dp[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t + 1; b < n + 1; ++b)
        {
            int tmp = 0, l = 0;
            for (int r = 1; r < m + 1; ++r)
            {
                tmp = dp[t][l] + dp[b][r] - dp[t][r] - dp[b][l];
                if (maxt < tmp)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b - 1;
                    res[3] = r - 1;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r;
                }
            }
        }
    return res;
}
vector<int> soso(vector<vector<int>> &nums)
{
    int n = nums.size();
    int m = nums[0].size();
    long dp[n + 1][m + 1];
    for (int i = 1; i < n + 1; ++i)
        for (int j = 1; j < m + 1; ++j)
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + nums[i - 1][j - 1];
    int maxt = INT_MIN;
    vector<int> res(4);
    for (int t = 0; t < n; ++t)
        for (int b = t + 1; b < n + 1; ++b)
        {
            int tmp = 0, l = 0;
            for (int r = 1; r < m + 1; ++r)
            {
                tmp = dp[t][l] + dp[b][r] - dp[b][l] - dp[t][r];
                if (tmp > maxt)
                {
                    maxt = tmp;
                    res[0] = t;
                    res[1] = l;
                    res[2] = b - 1;
                    res[3] = r - 1;
                }
                if (tmp < 0)
                {
                    tmp = 0;
                    l = r;
                }
            }
        }
    return res;
}
// 没有感情的刷题机器 就是刷刷刷 巩固新的思路。。成为自己自然而然的。