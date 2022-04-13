
#include <algorithm>
using namespace std;
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// int maxPathSum(TreeNode *root)
// {
//   dfs(root);

// }

// int res = 0;
// int max = 0;
// TreeNode *dfs(TreeNode *root)
// {
//   if (!root)
//   {
//     res += root->val;
//     if (res < 0)
//       res = 0;
//     if (res > max)
//       max = res;
//     root->left = dfs(root->left);
//     root->right = dfs(root->right);
//   }
// }
int maxpath(TreeNode *root, int &val)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, val);
  int right = maxpath(root->right, val);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  val = max(val, max(lmr, res));
  return res;
}

int maxpathsum(TreeNode *root)
{
  int val = INT_MIN;
  maxpath(root, val);
  return val;
}
int maxpath(TreeNode *root, int &val)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, val);
  int right = maxpath(root->right, val);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  val = max(val, max(lmr, res));
  return res;
}
int maxpath(TreeNode *root, int *val)
{
  if (!root)
    return 0;
}
int maxpath(TreeNode *root, int &maxx)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxx);
  int right = maxpath(root->right, maxx);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxx = (maxx, max(lmr, res));
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, (lmr, res));
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  int maxt = max(maxt, max(lmr, res));
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, left) + max(0, right);
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, left, right);
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int mapath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, right) + max(0, left);
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, right) + max(0, left);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(lmr, maxt);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int maxpath(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = maxpath(root->left, maxt);
  int right = maxpath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = mapath(root->left, maxt);
  int right = mapath(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, left, right);
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  return res;
}
int paht(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, right) + max(0, left);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int path(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = path(root->left, maxt);
  int right = path(root->right, maxt);
  int lmr = root->val + max(0, left) + max(0, right);
  int res = root->val + max(0, max(left, right));
  maxt = max(maxt, lmr);
  return res;
}
int soso(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = soso(root->left, maxt);
  int right = soso(root->right, maxt);
  int lmr = max(0, left) + max(0, right) + root->val;
  int res = max(0, max(left, right)) + root->val;
  maxt = max(lmr, maxt);
  return res;
}
int dfs(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int l = dfs(root->left, maxt);
  int r = dfs(root->right, maxt);
  int lmr = max(0, l) + max(0, r) + root->val;
  int res = max(0, max(l, r)) + root->val;
  maxt = max(maxt, lmr);
  return res;
}
int dfs(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = dfs(root->left, maxt);
  int right = dfs(root->right, maxt);
  int lmr = max(0, left) + max(0, right) + root->val;
  int res = max(0, max(left, right)) + root->val;
  maxt = max(maxt, lmr);
  return res;
}
int dfs(TreeNode *root, int &maxt)
{
  if (!root)
    return;
  int left = dfs(root->left, maxt);
  int right = dfs(root->right, maxt);
  int lmr = max(0, left) + max(0, right) + root->val;
  int res = max(0, max(left, right)) + root->val;
  maxt = max(maxt, lmr);
  return res;
}
int dfs(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = dfs(root->left, maxt);
  int right = dfs(root->right, maxt);
  int lmr = max(0, left) + max(0, right) + root->val;
  int res = max(0, max(left, right)) + root->val;
  maxt = max(maxt, lmr);
  return res;
}
int dfs(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = dfs(root->left, maxt);
  int right = dfs(root->right, maxt);
  int lmr = max(0, left) + max(0, right) + root->val;
  int res = max(0, max(left, right)) + root->val;
  maxt = max(maxt, lmr);
  return res;
}
int dfs(TreeNode *root, int &maxt)
{
  if (!root)
    return 0;
  int left = dfs(root->left, maxt);
  int right = dfs(root->right, maxt);
  int lmr = max(0, left) + max(0, right) + root->val;
  int res = max(0, max(left, right)) + root->val;
  maxt = max(maxt, lmr);
  return res;
}