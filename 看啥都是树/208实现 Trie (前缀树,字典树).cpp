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

class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie()
    {
        isEnd = false;
        memset(next, 0, sizeof(next));
    }

    void insert(string word)
    {
        Trie *node = this;
        for (char c : word)
        {
            if (node->next[c - 'a'] == NULL)
            {
                node->next[c - 'a'] = new Trie();
            }
            node = node->next[c - 'a'];
        }
        node->isEnd = true;
    }

    bool search(string word)
    {
        Trie *node = this;
        for (char c : word)
        {
            node = node->next[c - 'a'];
            if (node == NULL)
            {
                return false;
            }
        }
        return node->isEnd;
    }

    bool startsWith(string prefix)
    {
        Trie *node = this;
        for (char c : prefix)
        {
            node = node->next[c - 'a'];
            if (node == NULL)
            {
                return false;
            }
        }
        return true;
    }
};
//

class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie()
    {
        isEnd = false;
        memset(next, 0, sizeof(next));
    }
    void insert(string word)
    {
        Trie *node = this;
        for (char w : word)
        {
            if (node->next[w] == NULL)
                node->next[w] = new Trie();
            node = node->next[w];
        }
        node->isEnd = true;
    }
};
class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie() : isEnd(false)
    {
        memset(next, 0, sizeof(next));
    }
    void insert(string word)
    {
        Trie *node = this;
        for (char w : word)
        {
            if (node->next[w] == NULL)
                node->next[w] = new Trie();
            node = node->next[w];
        }
        node->isEnd = true;
    }
};
class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie() : isEnd(false)
    {
        memset(next, 0, sizeof(next));
    }
    void insert(string word)
    {
        Trie *node = this;
        for (char w : word)
        {

            if (node->next[w] == NULL)
                node->next[w] = new Trie();
            node = node->next[w];
        }
        node->isEnd = true;
    }
};
class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie() : isEnd(false)
    {
        memset(next, 0, sizeof(next));
    }
    void insert(string word)
    {
        Trie *node = this;
        for (char w : word)
        {
            if (node->next[w] == NULL)
                node->next[w] = new Trie();
            node = node->next[w];
        }
        node->isEnd = true;
    }
};
class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie() : isEnd(false)
    {
        memset(next, 0, sizeof(next));
    }
    void insert(string word)
    {
        Trie *node = this;
        for (char w : word)
        {
            if (node->next[w] == NULL)
                node->next[w] = new Trie();
            node = node->next[w];
        }
        node->isEnd = true;
    }
};
// 回头在页面提交下。。才真的能解决问题。。
// 下午再 再前一百题 找些经典的。。。来刷。。妈的 要不是他把我那些删了 我至于如此？？
class Trie
{
private:
    bool isEnd;
    Trie *next[26];

public:
    Trie()
    {
        isEnd = false;
        memset(next, 0, sizeof(next));
    }

    void insert(string word)
    {
        Trie *node = this;
        for (char w : word)
        {
            if (node->next[w - 'a'] == NULL)
                node->next[w - 'a'] = new Trie();
            node = node->next[w - 'a'];
        }
        node->isEnd = true;
    }

    bool search(string word)
    {
        Trie *node = this;
        for (char w : word)
        {
            if (node->next[w - 'a'] == NULL)
                return false;
            node = node->next[w - 'a'];
        }
        if (node->isEnd == true)
            return true;
        else
            return false;
    }

    bool startsWith(string prefix)
    {
        Trie *node = this;
        for (char p : prefix)
        {
            if (node->next[p - 'a'] == NULL)
                return false;
            node = node->next[p - 'a'];
        }
        return true;
    }
};
