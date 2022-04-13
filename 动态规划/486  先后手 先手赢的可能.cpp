#include <all.h>
using namespace std;
// 刷变强才是培养自信正道。
// 而不是去做简单题。
// 去刷难的。让难题对你来说变简单。。但是对别人来说还是难的。
// 这才有意义。
class Solution
{
public:
    bool PredictTheWinner(vector<int> &nums)
    {
        return dfs(nums, 0, nums.size() - 1, 1) >= 0;
    }

    int dfs(vector<int> &nums, int l, int r, int k)
    {
        // 变量名能用一个单词 就不要用两个。。
        if (l == r)
        {
            return nums[l] * k;
        }
        int res = nums[l] * k + dfs(nums, l + 1, r, -k);
        int maxt = nums[r] * k + dfs(nums, l, r - 1, -k);
        return max(res * k, maxt * k) * k;
    }
    // 这种用k来回变就很费劲。
};
// 有可能赢。。但是其实这个算法没有指导意义。
// 因为你不能预判对手的选择。
// 也没有形成自己固定的行为模式。。
// 因为这个答案是从结果推上来的。。
// 就比如买彩票一样。。是知道答案之后 往回推你每个号码应该选什么的。。已经没有意义。
// 因为你提前知道 这样走才会赢。。
// 而这个知道。。
// 但是如果能实时动态的一直去算这个算法。。。
// 那就很牛逼了。。
// 不过理解 还是有点费劲的。

class Solution
{
public:
    int dfs(vector<int> &nums, int l, int r, int s1, int s2, bool isfirst)
    {
        if (l == r)
        {
            return s1 + nums[l] - s2;
        }
        else
        {
            int left = -dfs(nums, l + 1, r, s2, s1 + nums[l], !isfirst);
            int right = -dfs(nums, l, r - 1, s2, s1 + nums[r], !isfirst);
            return max(left, right);
        }
    }

    bool PredictTheWinner(vector<int> &nums)
    {
        return dfs(nums, 0, nums.size() - 1, 0, 0, true) >= 0;
    }
};

class Solution
{
public:
    vector<int> nums;
    bool PredictTheWinner(vector<int> &_nums)
    {
        nums = _nums;
        return dfs(0, nums.size() - 1) >= 0;
    }
    int dfs(int l, int r)
    {
        if (l == r)
            return nums[l];
        int left = nums[l] - dfs(l + 1, r);
        int right = nums[r] - dfs(l, r - 1);
        return max(left, right);
    }
};
// 提交区还是有很多好的写法的。。找好解法的捷径。。
// 总是会碰到一款你满意的。。啊哈哈

vector<int> res;
int dfs(int l, int r)
{
    if (l == r)
        return res[l];
    int left = res[l] - dfs(l + 1, r);
    int right = res[r] - dfs(l, r - 1);
    return max(left, right);
}
//  是后序遍历。。
// 也就是数组是从0个元素开始长成目标数组的
// 他这边记录的是两个人的差值。。
// 理解了。。
// 两个人的差值。。但是它又怎么去分开先后手的？？？？、
int n;
int dp[20][20];
int dfs(int l, int r)
{
    if (l == r)
        return dp[l][r] = res[l];
    if (dp[l][r])
        return dp[l][r];
    int left = res[l] - dfs(l + 1, r);
    int right = res[r] - dfs(l, r - 1);
    return dp[l][r] = max(left, right);
}