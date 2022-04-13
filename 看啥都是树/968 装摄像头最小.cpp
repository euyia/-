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

// Definition for a Node.
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node *next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node *_left, Node *_right, Node *_next)
        : val(_val), left(_left), right(_right), next(_next) {}
};

// 其实就是左边三种情况 右边三种情况。。
// 然后去分类。。
// 分别去判断当前根节点在上面时候1 2 0；
// 就这么简单。

class Solution
{
public:
    //记录需要放置摄像头的数量
    int res = 0;
    int minCameraCover(TreeNode *root)
    {
        //后序遍历，从下自上遍历。
        //若遍历至最上面，root标志为0，则多加一个摄像头
        if (dfs(root) == 0)
        {
            res++;
        }
        return res;
    }
    int dfs(TreeNode *root)
    {

        //0：未被覆盖(当前节点未被照到)
        //1：已被覆盖(摄像头已经照到这个节点)
        //2：已放置摄像头

        //到根节点，
        if (root == NULL)
            return 1;
        //遍历左节点
        int left = dfs(root->left);
        //遍历右节点
        int right = dfs(root->right);
        //一个节点左右确定后，判断左右节点情况
        //所有情况00,01,02,11,12,22
        //左右孩子中有一个未被覆盖，则当前节点需要放置摄像头，当前节点标志为2
        if (left == 0 || right == 0)
        {
            res++;
            return 2;
        }
        //左右孩子均为已覆盖状态,则当前节点未被覆盖，标志为0
        if (left == 1 && right == 1)
        {
            return 0;
        }
        //若左右孩子为一个覆盖一个放置了摄像头，则当前节点为已被覆盖，标志为1
        if (left + right >= 3)
        {
            return 1;
        }
        //此时已经组合完了根节点所有情况，随便返回一个整数即可
        return 0;
    }
};

// 下面分类。。他也可以。。但是不知道他的分类依据。
// 好像是和那个视频作者一样。。只处理两种情况。
class Solution
{
public:
    int result = 0;
    int traversal(TreeNode *cur)
    {
        if (cur == NULL)
            return 2;
        int left = traversal(cur->left);
        int right = traversal(cur->right);
        if (left == 2 && right == 2)
            return 0;
        else if (left == 0 || right == 0)
        {
            result++;
            return 1;
        }
        else
            return 2;
    }
    int minCameraCover(TreeNode *root)
    {
        if (traversal(root) == 0)
            result++;
        return result;
    }
};

class Solution
{
public:
    int res;
    int minCameraCover1(TreeNode *root)
    {
        if (!root)
            return 1;
        int left = minCameraCover1(root->left);
        int right = minCameraCover1(root->right);
        if (left == 0 || right == 0)
        {
            res++;
            return 2;
        }
        else if (left == 1 && right == 1)
            return 0;
        else if (left + right >= 3)
            return 1;
    }
};
int res;
int dfs(TreeNode *root)
{
    if (dfs(root) == 0)
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (dfs(root) == 0)
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
int build(TreeNode *root)
{
    if (!dfs(root))
        res++;
    return res;
}
// 加速 加速  加速 。。。