#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
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

// =============z===========
class Solution
{
private:
    bool find(TreeNode *root, TreeNode *t)
    {
        if (!root)
            return false;
        if (root->val == t->val)
            return true;
        return find(root->left, t) || find(root->right, t);
    }

public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *a, TreeNode *b)
    {
        if (!root)
            return nullptr;
        if (root->val == a->val || root->val == b->val)
            return root;
        if (find(root->left, a) && find(root->left, b))
            return lowestCommonAncestor(root->left, a, b);
        if (find(root->right, a) && find(root->right, b))
            return lowestCommonAncestor(root->right, a, b);

        return root;
    }
};
//  这个时间效率高了100倍。。。。。！！！！！
class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == nullptr || root == p || root == q)
            return root;
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left == nullptr)
            return right;
        if (right == nullptr)
            return left;
        return root;
    }
};

// 作者：jyd
// 链接：https://leetcode-cn.com/problems/lowest-common-ancestor-of-a-binary-tree/solution/236-er-cha-shu-de-zui-jin-gong-gong-zu-xian-hou-xu/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
TreeNode *soso(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == nullptr || root == p || root == q)
    {
        printf("先序%d ", root->val);
        return root;
    }
    TreeNode *left = soso(root->left, p, q);
    TreeNode *right = soso(root->right, p, q);
    printf("后序%d ", root->val);
    if (left == nullptr)
        return right;
    if (right = nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right = nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root)
{

    TreeNode *left = soso(root->left);
    TreeNode *right = soso(root->right);
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == b || root == a)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
// 这种结构感觉自己很难去实现。。但是这种框架可以借用。。就像层序遍历那个size。。控制。
// 但是常考啊。
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (left == nullptr)
        return right;
    if (right == nullptr)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *right = soso(root->right, a, b);
    TreeNode *left = soso(root->left, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *right = soso(root->right, a, b);
    TreeNode *left = soso(root->left, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
// 两个递归 dfs 你就知道他相当于for的遍历作用就可以了。。当做组件用。。
// 你要遍历一棵树 你就把那两行放下去就对了。。
TreeNode *soso(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = soso(root->left, a, b);
    TreeNode *right = soso(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (root == nullptr || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    // 这边隐含了一种情况 就是比如叶节点。切这个叶节点他不是q也不是p。。
    return root;
}
// 他会从先序一直走。走到q或者p 然后弹回来。。
// 另外一个节点会一一直往下走。。走到底。。然后到p和q 同级的时候。。然后返回。。
// 也是就是只要没有碰到p q 就会一直走到底。。也即使有节点也会返回空。。
// 它并不是把树的结构改了。。只不过返回值它是一个地址而已。。
// 区别于那种root->left=dfs 那种。
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
// 这个结构非常的漂亮。简洁有效。
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == b || root == a)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == b || root == a)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
TreeNode *dfs(TreeNode *root, TreeNode *a, TreeNode *b)
{
    if (!root || root == a || root == b)
        return root;
    TreeNode *left = dfs(root->left, a, b);
    TreeNode *right = dfs(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}