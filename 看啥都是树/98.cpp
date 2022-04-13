
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
    bool isValidBST(TreeNode *root)
    {
        int min = 0;
        int max = 0;
        return koko(root, &min, &max);
    }
};
bool koko(TreeNode *t, int *min, int *max)
{
    int lmin, lmax, rmin, rmax;
    bool leftb, rightb;
    leftb = rightb = false;

    if (!t)
        return true;
    if (!t->left && !t->right)
    {
        lmax = rmin = t->val;
        return true;
    }
    if ((t->left && koko(t->left, &lmin, &lmax) && t->left->val > lmax) || !t->left)
        leftb = true;
    if ((t->right && koko(t->right, &rmin, &rmax) && t->right->val < rmin) || !t->right)
        rightb = true;
    if (leftb && rightb)
    {
        if (t->left)
            *min = lmin;
        else
            *min = t->val;
        if (t->right)
            *max = rmax;
        else
            *max = t->val;
        return true;
    }
    return false;
}
