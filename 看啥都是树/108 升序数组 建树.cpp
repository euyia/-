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
// class Solution {
//     public TreeNode sortedArrayToBST(int[] nums) {
//         return dfs(nums, 0, nums.length - 1);
//     }

//     private TreeNode dfs(int[] nums, int lo, int hi) {
//         if (lo > hi) {
//             return null;
//         }
//         // 以升序数组的中间元素作为根节点 root。
//         int mid = lo + (hi - lo) / 2;
//         TreeNode root = new TreeNode(nums[mid]);
//         // 递归的构建 root 的左子树与右子树。
//         root.left = dfs(nums, lo, mid - 1);
//         root.right = dfs(nums, mid + 1, hi);
//         return root;
//     }
// }

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return dfs(nums, 0, nums.size() - 1);
    }
    TreeNode *dfs(vector<int> &nums, int l, int r)
    {
        int mid = (l + r) / 2;
        if (l <= r)
        {
            TreeNode *root = new TreeNode(nums[mid]);
            root->left = dfs(nums, l, mid - 1);
            root->right = dfs(nums, mid + 1, r);
            return root;
        }
        else
            return nullptr;
    }
};
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
// 现在能学这些有意义的 有价值的知识。。能做自己感兴趣的事情。。就好好的做。。做好。
//  如果早先就参加工作 。现在估计顶多在运维。
// 我这样整天整天的刷 都要刷好几个月。。更不用说工作的时候抽时间和精力出来学。那简直就是不可能的。
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid + 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid + 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}
TreeNode *dfs(vector<int> &nums, int l, int r)
{
    if (l > r)
        return nullptr;
    int mid = l + (r - l) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = dfs(nums, l, mid - 1);
    root->right = dfs(nums, mid + 1, r);
    return root;
}