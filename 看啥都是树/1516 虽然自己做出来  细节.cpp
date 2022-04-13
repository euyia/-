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

// Definition for a Node.
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

unordered_map<Node *, Node *> mp;
Node *find_same(Node *root, Node *p, Node *q)
{
    // 说明这个找祖先是可以的。
    if (!root || root == p || root == q)
        return root;
    Node *res = nullptr;
    int cnt = 0;
    for (Node *c : root->children)
    {
        Node *cur = find_same(c, p, q);
        if (cur)
        {
            cnt++;
            res = cur;
        }
    }
    if (cnt > 1)
        return root;
    else
        return res;
}
Node *moveSubTree(Node *root, Node *small, Node *big)
{
    // 名字改成好分辨的。。不然有时候乱掉很头疼。。特别是这种题型要交叉判断的。特别容易混
    Node *dummy = new Node();
    dummy->children.push_back(root);
    // 这样就能统一操作  不用去考虑插入的是不是头结点这个很舒服的。
    Node *parent = find_same(root, small, big);
    if (parent == small)
    {
        // 这个是错切除。
        for (Node *&m : mp[big]->children)
        {
            if (m == big)
                m = nullptr;
        }
        parent->children.push_back(small);
        for (Node *&m : mp[small]->children)
        {
            if (m == small)
                m = parent;
        }
        return dummy->children[0];
    }
    else
    {
        return nullptr;
    }
}
void dfs(Node *root, Node *parent)
{
    if (!root)
        return;
    if (parent)
        mp[root] = parent;
    for (Node *m : root->children)
        dfs(m, root);
}

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
public:
    unordered_map<Node *, Node *> mp;
    Node *find_same(Node *root, Node *p, Node *q)
    {
        // 说明这个找祖先是可以的。
        if (!root || root == p || root == q)
            return root;
        Node *res = nullptr;
        int cnt = 0;
        for (Node *c : root->children)
        {
            Node *cur = find_same(c, p, q);
            if (cur)
            {
                cnt++;
                res = cur;
            }
        }
        if (cnt > 1)
            return root;
        else
            return res;
    }
    Node *moveSubTree(Node *root, Node *small, Node *big)
    {
        // 名字改成好分辨的。。不然有时候乱掉很头疼。。特别是这种题型要交叉判断的。特别容易混
        Node *dummy = new Node();
        dummy->children.push_back(root);
        // 这样就能统一操作  不用去考虑插入的是不是头结点这个很舒服的。
        dfs(dummy, nullptr);
        if (mp[small] == big)
            return root;
        Node *parent = find_same(root, small, big);
        if (parent == small)
        {
            //  果然是移除的写法有问题。直接改成null不行 要把他在数组里面清掉。位置都要抹掉。
            Node *cur = big;
            mp[big]->children.erase(remove(mp[big]->children.begin(), mp[big]->children.end(), big), mp[big]->children.end());
            printf("%p ", cur);
            cur->children.push_back(small);
            for (Node *&m : mp[small]->children)
            {
                if (m == small)
                    m = cur;
            }
            return dummy->children[0];
        }
        Node *cur = small;
        mp[small]->children.erase(remove(mp[small]->children.begin(), mp[small]->children.end(), small), mp[small]->children.end());
        big->children.push_back(cur);
        return dummy->children[0];
    }
    void dfs(Node *root, Node *parent)
    {
        if (!root)
            return;
        if (parent)
            mp[root] = parent;
        for (Node *m : root->children)
            dfs(m, root);
    }
};
// 几个细节 1 个是区别链表删元素的数组膳元素 erase remove的配合
// *&的配合
//