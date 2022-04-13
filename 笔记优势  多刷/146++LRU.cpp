#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct ddnode
{
    int key, value;
    ddnode *pre;
    ddnode *next;
    ddnode() : key(0), value(0), pre(nullptr), next(nullptr){};
    ddnode(int _key, int _value) : key(_key), value(_value), pre(nullptr), next(nullptr){};
};
class LRUCache
{
private:
    unordered_map<int, ddnode *> mp;
    ddnode *head;
    ddnode *tail;
    int size;
    int capacity;

public:
    LRUCache(int _c) : capacity(_c), size(0)
    {
        head = new ddnode();
        tail = new ddnode();
        head->next = tail;
        tail->pre = head;
    }
    int get(int key)
    {
        if (!mp.count(key))
            return -1;
        movetohead(mp[key]);
        return mp[key]->value;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            movetohead(mp[key]);
        }
        else
        {
            if (size == capacity)
            {
                ddnode *node = removetail();
                mp.erase(node->key);
                --size;
            }
            ddnode *node = new ddnode(key, value);
            mp[key] = node;
            add(node);
            ++size;
        }
    }
    ddnode *removetail()
    {
        ddnode *node = tail->pre;
        // tail->pre = node->pre;
        remove(node);
        return node;
    }
    void remove(ddnode *node)
    {
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
    void add(ddnode *node)
    {
        node->next = head->next;
        node->pre = head;
        head->next = node;
        node->next->pre = node;
    }
    void movetohead(ddnode *node)
    {
        remove(node);
        add(node);
    }
};
struct ddnode
{
    int key, value;
    ddnode *pre;
    ddnode *next;
    ddnode() : key(0), value(0), pre(nullptr), next(nullptr){};
    ddnode(int _key, int _value) : key(_key), value(_value), pre(nullptr),
                                   next(nullptr){};
};
class LRUCache
{
    unordered_map<int, ddnode *> mp;
    ddnode *head;
    ddnode *tail;
    int size;
    int capacity;
    LRUCache(int _capa) : capacity(_capa), size(0)
    {
        head = new ddnode();
        tail = new ddnode();
        head = tail->pre;
        tail = head->next;
    }
    void remove(ddnode *node)
    {
        node->next->pre = node->pre;
        node->pre->next = node->next;
    }
    void add(ddnode *node)
    {
        node->next = head->next;
        node->pre = head;
        head->next = node;
        node->next->pre = node;
    }
    void movetohead(ddnode *node)
    {
        remove(node);
        add(node);
    }
    ddnode *removetail()
    {
        ddnode *node = tail->pre;
        remove(node);
        return node;
    }
    int get(int key)
    {
        if (!mp.count(key))
            return -1;
        else
            ;
        movetohead(mp[key]);
        return mp[key]->value;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            movetohead(mp[key]);
        }
        else
        {
            if (capacity == size)
            {

                ddnode *node = removetail();
                mp.erase(node->key);
                --size;
            }
            ddnode *node = new ddnode(key, value);
            mp[key] = node;
            movetohead(node);
            ++size;
        }
    }
};
struct ddnode
{
    int key, value;
    ddnode *pre;
    ddnode *next;
    ddnode() : key(0), value(0), pre(nullptr), next(nullptr){};
    ddnode(int _key, int _value) : key(_key), value(_value), pre(nullptr), next(nullptr){};
};
class LRUCache
{
private:
    unordered_map<int, ddnode *> mp;
    ddnode *head;
    ddnode *tail;
    int size;
    int capacity;

public:
    LRUCache(int _capa) : capacity(_capa), size(0)
    {
        head = new ddnode();
        tail = new ddnode();
        head->next = tail;
        tail->pre = head;
    }
    void remove(ddnode *node)
    {
        node->next->pre = node->pre;
        node->pre->next = node->next;
    }
    void add(ddnode *node)
    {
        node->next = head->next;
        node->pre = head;
        head->next = node;
        node->next->pre = node;
    }
    void movetohead(ddnode *node)
    {
        remove(node);
        add(node);
    }
    ddnode *removetail()
    {
        ddnode *node = tail->pre;
        remove(node);
        return node;
    }
    int get(int key)
    {
        if (mp.count(key))
            return mp[key]->value;
        else
            return -1;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            movetohead(mp[key]);
        }
        else
        {
            if (size == capacity)
            {
                ddnode *node = removetail();
                mp.erase(node->key);
                --size;
            }
            ddnode *node = new ddnode(key, value);
            mp[key] = node;
            add(node);
            ++size;
        }
    }
};
struct ddnode
{
    ddnode *pre;
    ddnode *next;
    int key, value;
    ddnode() : key(0), value(0), pre(nullptr), next(nullptr){};
    ddnode(int _key, int _value) : key(_key), value(_value), pre(nullptr), next(nullptr){};
};
class LRUCache
{
private:
    unordered_map<int, ddnode *> mp;
    ddnode *head;
    ddnode *tail;
    int size;
    int capacity;

public:
    LRUCache(int _capacity) : capacity(_capacity), size(0)
    {
        head = new ddnode();
        tail = new ddnode();
        head->next = tail;
        tail->pre = head;
    }
    void remove(ddnode *node)
    {
        node->next->pre = node->pre;
        node->pre->next = node->next;
    }
    void add(ddnode *node)
    {
        node->next = head->next;
        node->pre = head;
        head->next = node;
        node->next->pre = node;
    }
    void movetohead(ddnode *node)
    {
        remove(node);
        add(node);
    }
    ddnode *removetail()
    {
        ddnode *node = tail->pre;
        remove(node);
        return node;
    }
    int get(int key)
    {
        if (mp.count(key))
        {
            movetohead(mp[key]);
            return mp[key]->value;
        }
        else
            return -1;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            movetohead(mp[key]);
        }
        else
        {
            if (size == capacity)
            {
                ddnode *node = removetail();
                mp.erase(node->key);
                --size;
            }
            ddnode *node = new ddnode(key, value);
            mp[key] = node;
            add(node);
            ++size;
        }
    }
};
struct ddnode
{
    int key, value;
    ddnode *pre;
    ddnode *next;
    ddnode() : key(0), value(0), pre(nullptr), next(nullptr){};
    ddnode(int _key, int _value) : key(_key), value(_value), pre(nullptr), next(nullptr){};
};
class lrc
{
private:
    unordered_map<int, ddnode *> mp;
    int size;
    int capacity;
    ddnode *head;
    ddnode *tail;

public:
    lrc(int _capacity) : capacity(_capacity), size(0)
    {
        head = new ddnode();
        tail = new ddnode();
        head->next = tail;
        tail->pre = head;
    }
    void remove(ddnode *node)
    {
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
    void add(ddnode *node)
    {
        node->next = head->next;
        node->pre = head;
        head->next = node;
        node->next->pre = node;
    }
    void movetohead(ddnode *node)
    {
        remove(node);
        add(node);
    }
    ddnode *removetail()
    {
        ddnode *node = tail->pre;
        remove(node);
        return node;
    }
    int get(int key)
    {
        if (mp.count(key))
        {
            movetohead(mp[key]);
            return mp[key]->value;
        }
        else
            return -1;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            movetohead(mp[key]);
        }
        else
        {
            if (size == capacity)
            {
                ddnode *node = removetail();
                mp.erase(node->key);
                --size;
            }
            ddnode *node = new ddnode(key, value);
            mp[key] = node;
            add(node);
            ++size;
        }
    }
};
struct ddnode
{
    ddnode *pre;
    ddnode *next;
    int key, value;
    ddnode() : key(0), value(0), pre(nullptr), next(nullptr){};
    ddnode(int _key, int _value) : key(_key), value(_value), pre(nullptr), next(nullptr){};
};
class lrc
{
private:
    unordered_map<int, ddnode *> mp;
    ddnode *head;
    ddnode *tail;
    int size;
    int capacity;

public:
    lrc(int _c) : capacity(_c), size(0)
    {
        head = new ddnode();
        tail = new ddnode();
        head->next = tail;
        tail->pre = head;
    }
    void remove(ddnode *node)
    {
        node->next->pre = node->pre;
        node->pre->next = node->next;
    }
    void add(ddnode *node)
    {
        node->next = head->next;
        node->pre = head;
        head->next = node;
        node->next->pre = node;
    }
    void movetohead(ddnode *node)
    {
        remove(node);
        add(node);
    }
    ddnode *removetail()
    {
        ddnode *node = tail->pre;
        remove(node);
        return node;
    }
    int get(int key)
    {
        if (mp.count(key))
        {
            movetohead(mp[key]);
            return mp[key]->value;
        }
        else
            return -1;
    }
    void put(int key, int value)
    {
        if (mp.count(key))
        {
            mp[key]->value = value;
            movetohead(mp[key]);
        }
        else
        {
            if (size == capacity)
            {
                ddnode *node = removetail();
                mp.erase(node->key);
                --size;
            }
            ddnode *node = new ddnode(key, value);
            mp[key] = node;
            add(node);
            ++size;
        }
    }
};
// 这个零时让写一个估计也够呛。
// 核心是哈希表+双向链表 实现 实时刷新热度这个功能。
// 算法也是可以实现体验的提升。。材料电容屏 电阻屏。。这种 也是。