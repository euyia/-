struct TreeNode
{
  int data;
  TreeNode *left;
  TreeNode *right;
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  TreeNode *pre, *head;
  void dfs(TreeNode *root)
  {
    if (!root)
      return;
    dfs(root->left);

    if (!pre)
      head = root;
    else
    {
      pre->right = root;
      pre->left = root->right;
      root->right = nullptr;
      root->left = nullptr;
    }
    pre = root;
  }
  TreeNode *upsideDownBinaryTree(TreeNode *root)
  {
    dfs(root);
    return head;
  }
};
这题我也没做好。。 虽然答案对。。但是不可复制 就没有任何价值。
    /**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
    class Solution
{
public:
  TreeNode *upsideDownBinaryTree(TreeNode *root)
  {
    TreeNode *parent = nullptr;
    TreeNode *sibling = nullptr;

    while (root != nullptr)
    {
      TreeNode *l = root->left;
      TreeNode *r = root->right;

      root->left = sibling;
      root->right = parent;

      parent = root;
      root = l;
      sibling = r;
    }

    return parent;
  }
};
。。。翻转类的。。

    具体分析这个问题：

        输入参数：关联的数据有几个：父节点 /
    该节点 / 子节点(子节点只有一个，题目说明) 输出参数： none 递归函数： 从父节点逐步向上递归 父节点变为左子树，这里需要注意不要成为环 左子树节点变成父节点 左子树的子树变成父节点 父节点的右子树变成左子树。

             ""
             "
#Definition for a Node.
             class Node : def __init__(self, val) : self.val = val self.left = None self.right = None self.parent = None
                                                                                                                    ""
                                                                                                                    "

                                                                                                                    class Solution : def flipBinaryTree(self, root
                                                                                                                                                        : 'Node', leaf
                                                                                                                                                        : 'Node')
                                                                                                                                         ->'Node' : self.root = root self.res = leaf self.dfs(leaf.parent, leaf, None) return self.res

                                                                                                                                                                                def dfs(self, p, leaf, np) : if not p : return None
                                                                                                                                                                                                                        gp = p.parent
                                                                                                                                                                                                                             if p.left
                                                                                                                                                                                                                             == leaf : p.left = None else : if p == self.root : p.right = None else : p.right = p.left
                                                                                                                                                                                                                                                                                                                p.left = None

                                                                                                                                                                                                                                                                                                                         p.parent = leaf leaf.left = p leaf.parent = np

                                                                                                                                                                                                                                                                                                                                                                     self.dfs(gp, p, leaf)

                                                                                                                                                                                                                                                                                                                                                                         作者：user5788R
                                                                                                                                                                                                                                                                                                                                                                     链接：https : //leetcode-cn.com/problems/change-the-root-of-a-binary-tree/solution/zhong-gui-zhong-ju-dfs-de-yi-xie-bian-xi-770c/
                                                                                                                                                                                                                                                                                                                                                                                   来源：力扣（LeetCode）
                                                                                                                                                                                                                                                                                                                                                                                   著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。