
#include <vector>
#include <stack>
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
TreeNode *mergeTrees(TreeNode *p, TreeNode *q)
{
  if (q == nullptr)
    return p;
  if (p == nullptr)
    return q;
  p->val += q->val;
  p->left = mergeTrees(p->left, q->left);
  p->right = mergeTrees(p->right, q->right);
  return p;
}

class Solution
{
public:
  vector<int> countBits(int n)
  {
    vector<int> res(n + 1, 0);
    for (int i = 0; i < n + 1; i++)
    {
      for (int j = 0; j < 32; j++)
        if (i & (1 << j))
          res[i]++;
    }
    return res;
  }
};

vector<int> dailyTemperatures(vector<int> &nums)
{
  int i, j;
  int n = nums.size();
  vector<int> res(n, 0);
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
      if (nums[j] > nums[i])
      {
        res.push_back(j - i);
        break;
      }
  }
  return res;
}
vector<int> dailyTemperatures(vector<int> &nums)
{
  int n = nums.size();
  stack<int> k;
  vector<int> res(n, 0);
  int i;
  for (i = 0; i < n; i++)
  {
    while (!k.empty() && nums[i] > k.top())
    {
      res[i] = i - k.top();
    }
    k.push(i);
  }
  return res;
}

class Solution
{
public:
  vector<int> dailyTemperatures(vector<int> &temperatures)
  {
    int n = temperatures.size();
    vector<int> ans(n);
    stack<int> s;
    for (int i = 0; i < n; ++i)
    {
      while (!s.empty() && temperatures[i] > temperatures[s.top()])
      {
        int previousIndex = s.top();
        ans[previousIndex] = i - previousIndex;
        s.pop();
      }
      s.push(i);
    }
    return ans;
  }
};
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}

vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {

    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> rsos(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}

vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      res[s.top()] = i - s.top();
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;

  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      s.pop();
    }
    s.push(i);
  }
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      s.pop();
    }
    s.push(i);
  }
  return;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      s.pop();
    }
    s.push(i);
  }
  return;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> res(n);
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      s.pop();
    }
    s.push(i);
  }
  return res;
}
vector<int> soso(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
    {
      s.pop();
    }
    s.push(i);
  }
  return;
}
void sosos(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
      s.pop();
    s.push(i);
    return;
  }
}
void sosos(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
      s.pop();
    s.push(i);
    return;
  }
}
void lsls(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
      s.pop();
    s.push(i);
  }
}
void lsls(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
      s.pop();
    s.push(i);
  }
}
void sosl(vector<int> &nums)
{
  int n = nums.size();
  stack<int> s;
  for (int i = 0; i < n; i++)
  {
    while (!s.empty() && nums[i] > nums[s.top()])
      s.pop();
    s.push(i);
  }
}
void sosos(vector<int>&nums)
{
  int n=nums.size();
  stack<int>s;
  for(int i=0;i<n;++i)
  {
    while(!s.empty()&&nums[i]>nums[s.top()])
    s.pop();
    s.push(i);
  }
}
void sosos(vector<int>&nums)
{
  int n=nums.size();
  stack<int>s;
  for(int i=0;i<n;++i)
  {
    while(!s.empty()&&nums[i]>nums[s.top()])
    s.pop();
    s.push(i);
  }
}
void gogo(vector<int>&nums)
{
  int n=nums.size();
  stack<int>s;
  for(int i=0;i<n;++i)
  {
    while(!s.empty()&&nums[i]>nums[s.top()])
    s.pop();
    s.push(i);
  }
}