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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 这题也算很牛逼的。。
// 打开了 二叉搜索树 和后序的组合。。
// 可以说对二叉搜索树的认知更加细腻。。。
// 只凭借一己之力。。后序的排序  就能退出整棵树  。。。。。核心。。牛啊牛。。。
class Solution
{
public:
    bool verifyPostorder(vector<int> &postorder)
    {
        return dfs(postorder, 0, postorder.size() - 1);
    }
    bool dfs(vector<int> &nums, int l, int r)
    {
        if (l > r)
            return true;
        int cur = l;
        int root = nums[r];
        while (nums[cur] < root)
            cur++;
        int pos = cur;
        while (pos < r)
            if (nums[pos++] < root)
                return false;
        return dfs(nums, l, cur - 1) && dfs(nums, cur, r - 1);
    }
};
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
bool dfs(vector<int> &nums, int l, int r)
{
    if (l >= r)
        return true;
    int mid = l;
    int root = nums[r];
    while (nums[mid] < root)
        mid++;
    int tmp = mid;
    while (tmp < r)
        if (nums[tmp++] < root)
            return false;
    return dfs(nums, l, mid - 1) && dfs(nums, mid, r - 1);
}
// 框架就是  前遍历  找点位
// 后面遍历 验证。。
// 二叉搜索树+单后序遍历的结果序列。。推导出来正确与否的验证。