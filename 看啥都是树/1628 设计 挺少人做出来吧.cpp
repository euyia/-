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

/**
 * This is the interface for the expression tree Node.
 * You should not remove it, and you can define some classes to implement it.
 */

class Node
{
public:
    Node(const string &val) : val(val), left(nullptr), right(nullptr) {}
    virtual ~Node(){};
    virtual int evaluate() const
    {
        if (val == "+")
        {
            return left->evaluate() + right->evaluate();
        }
        else if (val == "-")
        {
            return left->evaluate() - right->evaluate();
        }
        else if (val == "*")
        {
            return left->evaluate() * right->evaluate();
        }
        else if (val == "/")
        {
            return left->evaluate() / right->evaluate();
        }
        else
        {
            return stoi(val);
        }
    }

protected:
    // define your fields here
    string val;
    Node *left;
    Node *right;

    friend class TreeBuilder;
};

/**
 * This is the TreeBuilder class.
 * You can treat it as the driver code that takes the postinfix input 
 * and returns the expression tree represnting it as a Node.
 */

class TreeBuilder
{
private:
    stack<Node *> s;

public:
    Node *buildTree(vector<string> &postfix)
    {
        for (const string &str : postfix)
        {
            Node *n = new Node(str);
            if (str == "+" || str == "-" || str == "*" || str == "/")
            {
                n->right = s.top();
                s.pop();
                n->left = s.top();
                s.pop();
            }
            s.push(n);
        }
        return s.top();
    }
};
// 这个建树倒是很有趣。。
// 他把建好的节点 又放入。。用堆栈。。实现了。。后序遍历的一个建树。。
// 。。很巧妙的建树过程。。

/**
 * Your TreeBuilder object will be instantiated and called as such:
 * TreeBuilder* obj = new TreeBuilder();
 * Node* expTree = obj->buildTree(postfix);
 * int ans = expTree->evaluate();
 */
