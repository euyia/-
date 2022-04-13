#include <vector>
using namespace std;
// 以前不会就是不会。。没必要自己骗自己。。。
// 不会一定要做标记。。~！！！！ 这是最后的底线。
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        if (matrix.empty())
            return ans; //若数组为空，直接返回答案
        int u = 0;      //赋值上下左右边界
        int d = matrix.size() - 1;
        int l = 0;
        int r = matrix[0].size() - 1;
        while (true)
        {
            for (int i = l; i <= r; ++i)
                ans.push_back(matrix[u][i]); //向右移动直到最右
            if (++u > d)
                break; //重新设定上边界，若上边界大于下边界，则遍历遍历完成，下同
            for (int i = u; i <= d; ++i)
                ans.push_back(matrix[i][r]); //向下
            if (--r < l)
                break; //重新设定有边界
            for (int i = r; i >= l; --i)
                ans.push_back(matrix[d][i]); //向左
            if (--d < u)
                break; //重新设定下边界
            for (int i = d; i >= u; --i)
                ans.push_back(matrix[i][l]); //向上
            if (++l > r)
                break; //重新设定左边界
        }
        return ans;
    }
};
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &nums)
    {
        vector<int> res;
        int u = 0;
        int d = nums.size() - 1;
        int l = 0;
        int r = nums[0].size() - 1;
        while (1)
        {
            for (int i = l; i <= r; ++i)
                res.push_back(nums[u][i]);
            if (++u > d)
                break;
            for (int i = u; i <= d; ++i)
                res.push_back(nums[i][r]);
            if (--r < l)
                break;
            for (int i = r; i >= l; --i)
                res.push_back(nums[d][i]);
            if (--d < u)
                break;
            for (int i = d; i >= u; --i)
                res.push_back(nums[i][l]);
            if (++l > r)
                break;
        }
        return res;
    }
};
// 这题主要是思路。。要刷也是可以。。
// 然后画图比较不容易乱了思维。

// 说实话挺牛逼的。。至少把上下左右序列号。。玩的透透的。