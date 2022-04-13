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

// 委员算
总所周知 n &(n - 1) 可以用来消除最后一个1
    举例 : 以下都是二进制表示
           假设 n = 100100 那么 n - 1 = 100011 因为100 - 1 = 011 那么 n & (n - 1) = 100000 所以这是去掉了最后的一个1

                                                                                    因为异或的性质是 位相同异或为0 位不同异或为1 例如 1 ^
                                                                                    1 = 0;
1 ^ 0 = 1 然后比如 5 二进制为 101, 依据异或的性质 101 ^ 101 = 0 所以异或的性质就是两个相同的数 异或为0

                                                                  然后回文串只会有两种情况 要么 1221 要么 121 所以异或后，要么是0 要么是个数为奇数的数字。 然后因为题目取值范围是1～9 所以可以用每一位代表一个数字。 比如5写成100000，这样哪怕是 121 这种情况 也只会剩下2 也就是100
                                                                      这样我们就可以根据 n &
                                                              (n - 1) 来消除1 所以判断是否为回文数字的条件就变成了

                                                              (n == 0 || (n & (n - 1)) == 0)

                                                                  class Solution
{
    int ans = 0;

public:
    int pseudoPalindromicPaths(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int nums = 0;
        dfs(root, nums);
        return ans;
    }

    void dfs(TreeNode *root, int temp)
    {
        int n = temp ^ (1 << root->val);
        if (root->left == nullptr && root->right == nullptr)
        {
            if (n == 0 || (n & (n - 1)) == 0)
            {
                ++ans;
            }
            return;
        }
        if (root->left != nullptr)
        {
            dfs(root->left, n);
        }
        if (root->right != nullptr)
        {
            dfs(root->right, n);
        }
    }
}
// 其实思路是一样的 就是回溯统计。然后做判断。。
// 只不过他这边用位运算来判断。。
// 位运算有些性质。用起来在一些场合非常的牛逼。
