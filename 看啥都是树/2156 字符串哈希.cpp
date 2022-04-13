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

class BSTIterator
{

private:
    int index = -1;
    stack<TreeNode *> stk;
    vector<TreeNode *> list;

public:
    BSTIterator(TreeNode *root)
    {
        pushLeft(root);
    }

    void pushLeft(TreeNode *root)
    {
        while (root)
        {
            stk.push(root);
            root = root->left;
        }
    }

    bool isInRange(int i)
    {
        return i >= 0 && i < list.size();
    }

    bool hasNext()
    {
        if (isInRange(index + 1))
        {
            return true;
        }

        return !stk.empty();
    }

    int next()
    {
        assert(hasNext());
        int curVal = 0;
        if (isInRange(index + 1))
        {
            curVal = list[index + 1]->val;
        }
        else
        {
            auto cur = stk.top();
            stk.pop();
            pushLeft(cur->right);
            list.push_back(cur);
            curVal = cur->val;
        }

        index++;
        return curVal;
    }

    bool hasPrev()
    {
        return isInRange(index - 1);
    }

    int prev()
    {
        --index;
        return list[index]->val;
    }
};

class Solution
{

public:
    string subStrHash(string s, int power, int M, int k, int hashValue)
    {
        int n = s.size();
        long long code = 0, p = 1;
        //从后往前求第一个hash值，并计算power的k次幂，下一步用
        for (int i = n - 1; i >= n - k; i--)
        {
            code = (code * power + (s[i] - 'a' + 1)) % M;
            p = p * power % M;
        }
        int idx = -1;
        //记录匹配位置
        if (code == hashValue)
        {
            idx = n - k;
        }

        for (int i = n - k - 1; i >= 0; i--)
        {
            //整体乘power+新加入的低位-乘以power的高位(s[i+k]*p)
            code = (code * power + (s[i] - 'a' + 1) - (s[i + k] - 'a' + 1) * p % M + M) % M;
            //记录最新匹配位置
            if (code == hashValue)
            {
                idx = i;
            }
        }
        return idx == -1 ? "" : s.substr(idx, k);
    }
};
