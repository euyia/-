#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
// 子数组。。是对数组进行处理 除了排列组合这两种之外。
// 第三种 数组的处理方式。。很有意义。
// 用递归的方式取的是所有的子序列。。包含子数组。。
// 90题 那道子集。。他就是要用递归的方式才能实现。。
// 用这样双重循环 没办法去重。很奇怪。 因为无法判断前面是否有出现过类似的组合。
// 昨天不会做。今天就觉得这题不会做也太菜了。。

class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> res;
        vector<int> path;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {

            for (int j = i; j < n; ++j)
            {
                // if(j>i&&nums[j]==nums[j-1])continue;
                // 很奇怪。用这种for的方式就得不到 我们要的答案。。没办法去重。。
                path.push_back(nums[j]);
                res.push_back(path);
            }
            path.clear();
        }
        return res;
    }
};
class Solution
{
public:
    long long subArrayRanges(vector<int> &nums)
    {
        int n = nums.size();
        long res = 0;
        for (int i = 0; i < n; ++i)
        {
            int maxt = nums[i], mint = nums[i];
            for (int j = i + 1; j < n; ++j)
            {
                maxt = max(maxt, nums[j]);
                mint = min(mint, nums[j]);
                res += maxt - mint;
            }
        }
        return res;
    }
};
long soso(vector<int> &nums)
{
    int n = nums.size();
    long res = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 1; j)
}

