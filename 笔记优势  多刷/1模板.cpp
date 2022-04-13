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
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
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
// 即使不会。。抄下来也是非常值得。
// 来学 学学 做题的 心态要放好。不然会很不舒服的。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 我是有条件 也肯去做，方向对。。就就战胜了百分99的人。
// 一步一步的攀登上去。
class Solution
{
public:
    int maximumProduct(vector<int> &nums, int k)
    {
        int mod = 1e9 + 7;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < nums.size(); ++i)
        {
            q.push(nums[i]);
        }
        while (k--)
        {
            int tmp = q.top();
            q.pop();
            if (q.top() - tmp > k)
            {
                tmp += k;
            }
            else
            {
                tmp += q.top() - tmp;
                k -= q.top() - tmp;
            }
            q.push(tmp);
        }
        int sum = 1;
        while (q.size())
        {
            sum *= q.top();
            q.pop();
            sum %= mod;
        }
        return sum;
    }
};

class Solution
{
public:
    string minimizeResult(string expression)
    {
    }
};

class Solution
{
public:
    int largestInteger(int n)
    {
        // 1 要记录前后的奇偶性
        // 然后排序。。按照他奇偶 从打往下排。
        int a[10], b[10], c[10];
        int i = 0, j = 0, k = 0;
        while (n)
        {
            int k = n % 10;
            n /= 10;
            a[i++] = k % 2;
            if (k % 2 == 1)
                b[j++] = k;
            else
                c[k++] = k;
            // 如果为偶数 放c
        }
        sort(b, b + j);
        sort(c, c + k);
        int res = 0;
        while (i--)
        {
            if (a[i])
                res = 10 * res + b[--j];
            else
                res = 10 * res + c[--k];
        }
        return res;
    }
};

class Solution
{
public:
    string minimizeResult(string s)
    {
        // 数量级小 我们可以枚举所有可能。
        int a = 0, b = 0;
        int j = 11;
        int x[10], y[10];
        int l = 0, r = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '+')
                j = i;
            if (i < j)
                a += s[i] - '0' + 10 * a, x[l++] = s[i] - '0';
            else if (i > j)
                b += 10 * b + s[i] - '0', y[r++] = s[i] - '0';
        }

        int mint = INT_MAX, ll, rr;
        // 这个分别记录最小值对应的一些数据
        int sum = 1;
        for (int i = 0; i < l; ++i)
        {
            int k = pow(10, i);
            int z1 = (a / k == 0) ? 1 : a / k;
            int z2 = a % k;
            for (int j = 0; j < r; ++j)
            {
                int w = pow(10, j);
                int y1 = b / w;
                int y2 = b % w;
                sum = (z2 + y1) * y2 * z1;
                if (sum < mint)
                {
                    mint = sum;
                    ll = i;
                    rr = j;
                }
            }
        }
        // 这样能算出最小对应的切分点。
        // 有边界就是做有。
        // 有个边界就是都是是0的情况 要改成1 。
        ll = l - ll, rr = r - rr;
        string lll = to_string(a);
        string rrr = to_string(b);
        lll.insert(ll + 1, "(");
        rrr.insert(rr + 1, ")");
        // cout<<lll<<'+'<<rrr;
        return lll + '+' + rrr;
    }
};
