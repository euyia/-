
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
public:
    bool isSubStructure(TreeNode *a, TreeNode *b)
    {
        return (a && b) && (dfs(a, b) || isSubStructure(a->left, b) || isSubStructure(a->right, b));
    }

    bool dfs(TreeNode *a, TreeNode *b)
    {

        if (!b)
            return true;
        if (!a)
            return false;
        return (a->val == b->val) && dfs(a->left, b->left) &&
               dfs(a->right, b->right);
    }
};
// public boolean isSubStructure(TreeNode A, TreeNode B) {
//     if(A == null || B == null) return false;
//     return dfs(A, B) || isSubStructure(A.left, B) || isSubStructure(A.right, B);
// }
// public boolean dfs(TreeNode A, TreeNode B){
//     if(B == null) return true;
//     if(A == null) return false;
//     return A.val == B.val && dfs(A.left, B.left) && dfs(A.right, B.right);
// }
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!a)
        return false;
    if (!b)
        return true;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b->left) || soso(a->right, b->right));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b->right));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if (!b)
        return true;
    if (!a)
        return false;
    return (a->val == b->val) && dfs(a->left, b->left) && dfs(a->right, b->right);
}
bool soso(TreeNode *a, TreeNode *b)
{
    return (a && b) && (dfs(a, b) || soso(a->left, b) || soso(a->right, b));
}
bool dfs(TreeNode *a, TreeNode *b)
{
    if(!b)return true;
    if(!a)return false;
    return (a->val==b->val)&&dfs(a->left,b->left)&&dfs(a->right,b->right);
}
bool soso(TreeNode*a,TreeNode*b)
{
    return (a&&b)&&(dfs(a,b)||soso(a->left,b)||soso(a->right,b));
}
bool dfs(TreeNode*a,TreeNode*b)
{
    if(!b)return true;
    if(!a)return false;
    return (a->val==b->val)&&dfs(a->left,b->left)&&dfs(a->right,b->right);

}
bool soso(TreeNode*a,TreeNode*b)
{
    return (a&&b)&&(dfs(a,b)||soso(a->left,b)||soso(a->right,b));
}
bool dfs(TreeNode*a,TreeNode*b)
{
    if(!b)return true;
    if(!a)return false;
    return (a->val==b->val)&&dfs(a->left,b->left)&&dfs(a->right,b->right);
}