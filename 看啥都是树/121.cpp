#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
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

// =============z===========
class Solution {
public:
    int maxProfit(vector<int>& prices) {
int res = 0;
  int n = prices.size();
  int maxx = 0;
  for (int i = 1; i < n; ++i)
  {
    res = max(0, res + prices[i] - prices[i - 1]);
    maxx = max(maxx, res);
  }
  return maxx;

    }
};