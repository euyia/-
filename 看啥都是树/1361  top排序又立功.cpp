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
// 这题是给两个数组
// 数组里面分别记录左右节点的下标 （地址）
// 让你去判断这是不是一颗正常的树 。。
// 树 1 每个节点只有一个父亲 。。2 树 只有一个父亲 3 。树没有环
// 感觉这个环可以用另外的角度。。就是他的边数=顶点数-1；这样可以吗。。
class Solution
{
public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        vector<int> indegrees(n);
        for (int i = 0; i < n; ++i)
        {
            if (leftChild[i] != -1)
                indegrees[leftChild[i]]++;
            if (rightChild[i] != -1)
                indegrees[rightChild[i]]++;
        }
        queue<int> q;
        for (int i = 0; i < n; ++i)
        {
            if (indegrees[i] > 1)
                return false;
            if (indegrees[i] == 0)
                q.push(i);
        }
        if (q.size() > 1)
            return false;

        int count = 0;
        for (int i : indegrees)
            count += i;
        if (count != n - 1)
            return false;
        return true;
        // while (!q.empty())
        // {
        //     count++;
        //     int k = q.front();
        //     q.pop();
        //     if (leftChild[k] != -1)
        //     {
        //         indegrees[leftChild[k]]--;
        //         // if (indegrees[leftChild[k]] < 0)
        //         //     return false;
        //         if (indegrees[leftChild[k]] == 0)
        //             q.push(leftChild[k]);
        //     }
        //     if (rightChild[k] != -1)
        //     {
        //         indegrees[rightChild[k]]--;
        //         // if (indegrees[rightChild[k]] < 0)
        //         //     return false;
        //         if (indegrees[rightChild[k]] == 0)
        //             q.push(rightChild[k]);
        //     }
        // }
        // if (count != n)
        //     return false;
        // return true;
    }
};
// 本来想改成n=n-1顶点 这个关系。。来判断。但是不行
// 有些两个点互相指。。我也是裂开了。。反正就是不行。
class Solution
{
public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        vector<int> indegrees(n);
        for (int i = 0; i < n; ++i)
        {
            if (leftChild[i] != -1)
                indegrees[leftChild[i]]++;
            if (rightChild[i] != -1)
                indegrees[rightChild[i]]++;
        }
        queue<int> q;
        for (int i = 0; i < n; ++i)
        {
            if (indegrees[i] > 1)
                return false;
            if (indegrees[i] == 0)
                q.push(i);
        }
        if (q.size() > 1)
            return false;
        int count = 0;
        while (!q.empty())
        {
            count++;
            int k = q.front();
            q.pop();
            if (leftChild[k] != -1)
            {
                indegrees[leftChild[k]]--;
                if (indegrees[leftChild[k]] < 0)
                    return false;
                if (indegrees[leftChild[k]] == 0)
                    q.push(leftChild[k]);
            }
            if (rightChild[k] != -1)
            {
                indegrees[rightChild[k]]--;
                if (indegrees[rightChild[k]] < 0)
                    return false;
                if (indegrees[rightChild[k]] == 0)
                    q.push(rightChild[k]);
            }
        }
        if (count != n)
            return false;
        return true;
    }
};

class Solution
{
public:
    bool validateBinaryTreeNodes(int n, vector<int> &leftChild, vector<int> &rightChild)
    {
        // 这种没有现成的二叉树可以遍历的问题，。。。。因为遍历是基础，这类题型要统一总结下。。。
        //     一切靠自己，老子要领跑
        // 其实那些白的。就是用反差凸显了自己的优点。我的优点？？
        vector<int> indegree(n);
        for (int i = 0; i < n; ++i)
        {
            if (leftChild[i] != 0)
                indegree[rightChild[i]]++;
            if (rightChild[i] != -1)
                indegree[rightChild[i]]++;
        }
        queue<int> q;
        for (int i = 0; i < n; ++i)
        {
            if (indegree[i] > 0)
                return false;
            if (indegree[i] == 0)
                q.push(i);
        }
        if (q.size() > 1)
            return false;
        int count = 0;
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            count++;
            if (leftChild[cur] != -1 && --indegree[leftChild[cur]] == 0)
                q.push(leftChild[cur]);
            if (rightChild[cur] != -1 && --indegree[rightChild[cur]] == 0)
                q.push(rightChild[cur]);
        }
        if (count != n)
            return false;
        return true;
    }
};
bool top(int n, vector<int> &leftchild, vector<int> &rightchild)
{
    vector<int> indegree(n);
    for (int i = 0; i < n; ++i)
    {
        if (leftchild[i] != -1)
            indegree[leftchild[i]]++;
        if (rightchild[i] != -1)
            indegree[rightchild[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (indegree[i] > 1)
            return false;
        if (indegree[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (leftchild[v] != -1 && --indegree[leftchild[v]] == 0)
            q.push(leftchild[v]);
        if (rightchild[v] != -1 && --indegree[rightchild[v]] == 0)
            q.push(rightchild[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
// 这个可以多刷。。。
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
// 刷+分享。。思维要跟上。。手速。。
//top排序其实就是层序遍历 只不过他用的数组是入度数的数组。。

bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
//top排序其实就是层序遍历 只不过他用的数组是入度数的数组。。
// 没事就多刷
// 刷它个1000 行以上。。。
// 你以后会感激自己的。。
// 一定一定要熟练。。你才能拿出来用。。一定一定要熟练。
// 没事就敲着玩。。
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
// 要刷就刷难的。。
// 就那几个好的框架。。刷个1000遍。。
// 总体思路要先抓住。然后枝干再去细化。这样不会写着写着忘了。
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int vi = 0; v < n; ++v)
    {
        if (left[v] != -1)
            top[left[v]]++;
        if (right[v] != -1)
            top[right[v]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1 && --top[left[v]] == 0)
            q.push(left[v]);
        if (right[v] != -1 && --top[right[v]] == 0)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
// 大道至简。

bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        count++;
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] = -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}

bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    int count = 0;
    if (q.size() > 1)
        return false;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
// 入度数不为零。就是里面有环。。等价的。
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 0)
        return false;
    int count = 0;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        count++;
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
// 尝试了 去掉三个中任何一个都不行。。
// 说明他们分别覆盖了一个独立维度的错误情况。
// 但是他们的分类依据是什么。。
// 是根据什么。。分的这三个类。。而不是别的 。
// 各种尝试 。。就是要这三个配合才可以。。
// 那这个框架有点大啊。。。。。。。。
// 两个1000
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    int count = 0;
    if (q.size() > 1)
        return false;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    int count = 0;
    if (q.size() > 1)
        return false;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    int count = 0;
    if (q.size() > 1)
        return false;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    if (q.size() > 1)
        return false;
    int count = 0;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}
bool find(int n, vector<int> &left, vector<int> &right)
{
    vector<int> top(n);
    for (int i = 0; i < n; ++i)
    {
        if (left[i] != -1)
            top[left[i]]++;
        if (right[i] != -1)
            top[right[i]]++;
    }
    queue<int> q;
    for (int i = 0; i < n; ++i)
    {
        if (top[i] > 1)
            return false;
        if (top[i] == 0)
            q.push(i);
    }
    int count = 0;
    if (q.size() > 1)
        return false;
    while (!q.empty())
    {
        count++;
        int v = q.front();
        q.pop();
        if (left[v] != -1)
            q.push(left[v]);
        if (right[v] != -1)
            q.push(right[v]);
    }
    if (count != n)
        return false;
    return true;
}