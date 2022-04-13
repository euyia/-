struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
};
bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p || !q)
    return false;
  return (p->val == q->val) && helper(p->left, q->right) && helper(p->right, q->left);
}
bool isSymmetric(TreeNode *t)
{
  if (!t)
    return true;
  return helper(t->left, t->right);
}

bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p || !q)
    return false;
  return (p->val == q->val) && helper(p->left, q->right) && helper(p->right, q->left);
}
bool issyme(TreeNode *t)
{
  if (!t)
    return true;
  return helper(t->left, t->right);
}
bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p == !q)
    return false;
  return (p->val == q->val) && helper(p->left, q->right) && helper(q->left, p->right);
}
bool issyme(TreeNode *t)
{
  if (!t)
    return true;
  return helper(t->left, t->right);
}
bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p == !q)
    return false;
  return (p->val == q->val) && helper(q->left, p->right) && helper(q->right, p->left);
}
bool isyme(TreeNode *t)
{
  if (!t)
    return true;
  return helper(t->right, t->left);
}
bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p || !q)
    return false;
  return (p->val == q->val) && helper(q->left, p->right) && helper(q->right, p->left);
}
bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p || !q)
    return false;
  return (p->val == q->val) && helper(p->left, q->right) && helper(q->right, p->left);
}
bool issyme(TreeNode *t)
{
  if (!t)
    return true;
  return helper(t->left, t->right);
}
bool helper(TreeNode *p, TreeNode *q)
{
  if (p == q)
    return true;
  if (!p || !q)
    return false;
  return (p->val == q->val) && helper(q->left, p->right) && helper(q->right, p->left);
}
bool issyme(TreeNode *t)
{
  if (!t)
    return true;
  return helper(t->left, t->right);
}

bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->right, b->left) && dfs(a->left, b->right);
}
bool dfs(TreeNode *a, TreeNode *b)
{
  if (a == b)
    return true;
  if (!a || !b)
    return false;
  return (a->val == b->val) && dfs(a->left, b->right) && dfs(a->right, b->left);
}