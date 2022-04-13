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
class Solution
{
public:
    vector<int> nums;

    unordered_map<int, vector<int>> node_child; //有向邻接表，结点的孩子结点们
    unordered_set<int> visited;                 //记忆化

    void dfs(int x)
    {
        visited.insert(nums[x]);
        for (int y : node_child[x])
        {
            if (visited.find(nums[y]) == visited.end())
            {
                dfs(y);
            }
        }
    }

    vector<int> smallestMissingValueSubtree(vector<int> &parents, vector<int> &nums)
    {
        this->nums = nums;
        int n = (int)parents.size();
        vector<int> mex(n, 1);

        //----建图
        for (int x = 0; x < n; x++)
        {
            int fx = parents[x];
            node_child[fx].push_back(x);
        }

        //----找基因值为1的结点
        int node_1 = -1;
        for (int x = 0; x < n; x++)
        {
            if (nums[x] == 1)
            {
                node_1 = x;
                break;
            }
        }

        //--从node_1往上走
        int cur_mex = 2; //只增不减
        int p = node_1;
        while (p >= 0)
        {
            dfs(p);
            while (visited.find(cur_mex) != visited.end())
            {
                cur_mex++;
            }
            mex[p] = cur_mex;

            p = parents[p];
        }

        return mex;
    }
};
