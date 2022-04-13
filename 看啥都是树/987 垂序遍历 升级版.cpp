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
// 多了一个临时的map 然后统计往再每层倒回给map。。。
// 这个倒的过程 对y进行了遍历。。。。
class Solution
{
public:
    struct Node
    {
        int x, y;
        TreeNode *root;
        Node() {}
        Node(int a, int b, TreeNode *c) : x(a), y(b), root(c) {}
    };

    vector<vector<int>> ans;
    map<int, vector<int>> ss;

    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        if (!root)
            return ans;
        queue<Node> q;
        q.push({0, 0, root});
        while (!q.empty())
        {
            int n = q.size();
            map<int, vector<int>> tmp; // 临时的 map
            for (int i = 0; i < n; i++)
            {
                auto k = q.front();
                q.pop();
                tmp[k.y].push_back(k.root->val);
                if (k.root->left)
                    q.push({k.x + 1, k.y - 1, k.root->left});
                if (k.root->right)
                    q.push({k.x + 1, k.y + 1, k.root->right});
            }
            for (auto t : tmp)
            {
                int x = t.first;
                vector<int> y = t.second; // 遍历
                sort(y.begin(), y.end()); // 排序
                for (auto &c : y)
                    ss[x].push_back(c); // 将节点加入第一个 map(ss) 中
            }
            tmp.clear();
        }
        for (auto t : ss)
        {
            int x = t.first;
            vector<int> y = t.second;
            ans.push_back(y);
        }
        return ans;
    }
};
