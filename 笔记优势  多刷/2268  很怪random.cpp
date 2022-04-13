#include <all.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;
    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
// 即使是这种普通的建树 我也觉得很费劲。。
// 为啥还要带个pre。。
// 明明一个cur能直接撸完。
class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* cur = head;
        Node* dum = new Node(0), *pre = dum;
        while(cur != nullptr) {
            Node* node = new Node(cur->val); // 复制节点 cur
            pre->next = node;                // 新链表的 前驱节点 -> 当前节点
            // pre->random = "???";          // 新链表的 「 前驱节点 -> 当前节点 」 无法确定
            cur = cur->next;                 // 遍历下一节点
            pre = node;                      // 保存当前新节点
        }
        return dum->next;
    }
};

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
            return nullptr;
        Node *cur = head;
        unordered_map<Node *, Node *> map;
        // 3. 复制各节点，并建立 “原节点 -> 新节点” 的 Map 映射
        while (cur != nullptr)
        {
            map[cur] = new Node(cur->val);
            cur = cur->next;
        }
        cur = head;
        // 4. 构建新链表的 next 和 random 指向
        while (cur != nullptr)
        {
            map[cur]->next = map[cur->next];
            map[cur]->random = map[cur->random];
            cur = cur->next;
        }
        // 5. 返回新链表的头节点
        return map[head];
    }
};
// 他就是把所有的节点都建一个 然后地址指针 用mp先存着。。
// 然后在遍历。。把关系建立起来。