typedef struct TreeNode
{
  int left,right;

}*Bintree;
#define MAX 100

struct Status {
    int a, b, c;
};

struct Status dfs(Bintree root) {
    if (!root) {
        return (struct Status){MAX / 2, 0, 0};
    }
    struct Status l = dfs(root->left);
    struct Status r = dfs(root->right);
    int a = l.c + r.c + 1;
    int b = fmin(a, fmin(l.a + r.b, r.a + l.b));
    int c = fmin(a, l.b + r.b);
    return (struct Status){a, b, c};
}

int minCameraCover(Bintree root) {
    struct Status ret = dfs(root);
    return ret.b;
}
