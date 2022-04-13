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
// 这题其实很简单。
// 找出每棵二叉搜索树。然后最好找的时候能统计。然后ifflag=true的时候再挑选。。

// Facebook[2+]; Apple[2+]; Amazon[2+]; Adobe[2+];
// Microsoft; Google; 字节跳动;
class Solution
{
public:
    int maxSumBST(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int maxSum = 0, currSum = 0;
        dfs(root, maxSum, currSum);
        return maxSum;
    }

private:
#define LONG_LONG_MIN -1000000
#define LONG_LONG_MAX 1000000
    using LL = long long;
    // 搜寻子树的伪最大值;
    // 如果根节点为空，返回 ret = LONG_LONG_MIN，确保 ret 一定小于root 父节点的值;
    LL pseudoTreeMax(const TreeNode *root)
    {
        if (!root)
            return LONG_LONG_MIN;
        while (root->right)
        {
            root = root->right;
        }
        return (LL)root->val;
    }

    // 搜寻子树的伪最小值
    // 如果根节点为空，返回 ret = LONG_LONG_MAX，确保 ret 一定大于root 父节点的值;
    LL pseudoTreeMin(const TreeNode *root)
    {
        if (!root)
            return LONG_LONG_MAX;
        while (root->left)
        {
            root = root->left;
        }
        return LL(root->val);
    }

    bool dfs(const TreeNode *root, int &maxS, int &currS)
    {
        if (root == nullptr)
        {
            currS = 0;
            return true;
        }                       // 递归终止
        int leftSubTreeSum = 0; // 左子树的数值和，初始化为0
        bool isleftBST = dfs(root->left, maxS, leftSubTreeSum);
        int rightSubTreeSum = 0;
        bool isrightBST = dfs(root->right, maxS, rightSubTreeSum);

        if (isleftBST && isrightBST)
        {
            // root是不是BST
            if (root->val > pseudoTreeMax(root->left) && root->val < pseudoTreeMin(root->right))
            {
                // 如果是就计算root-val+左子树数值和+右子树数值和，更新到current，表示以root为根节点的子树的数值和
                currS = root->val + leftSubTreeSum + rightSubTreeSum;
                // 更新maxSum
                if (currS > maxS)
                    maxS = currS;
                // 以root为根节点的子树是BST，返回true
                return true;
            }
        }
        // 此时 root肯定不是BST，currS 清零，返回false
        currS = 0;
        return false;
    }
};

这题视频也少。。 我看视频题解。 是说 要手动的去判断每个节点他是不是递归的大于左边最大。小于右边最小。。 class Solution
{
public:
    int maxsum = 0;
    int maxSumBST(TreeNode *root)
    {
        dfs(root);
        return maxsum;
    }
    vector<int> dfs(TreeNode *root)
    {
        if (!root)
            return {true, INT_MAX, INT_MIN, 0};
        auto lArr = dfs(root->left);
        auto rArr = dfs(root->right);
        int sum = 0, curmax, curmin;
        if (!lArr[0] || !rArr[0] || root->val >= rArr[1] || root->val <= lArr[2])
        {
            return {false, 0, 0, 0};
        }
        curmin = root->left ? lArr[1] : root->val;
        curmax = root->right ? rArr[2] : root->val;
        sum += (root->val + lArr[3] + rArr[3]);
        maxsum = max(maxsum, sum);
        return {true, curmin, curmax, sum};
    }
};
不过这个解法 速度比上面那个慢了三倍。