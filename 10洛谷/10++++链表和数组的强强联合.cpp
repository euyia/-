#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int n, a, b, c;

int main()
{
    cin >> n;
    list<int> li;
    list<int>::iterator nums[100001];
    int vis[100001]{0};
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(++it, i);
    }
    int m;
    cin >> m;
    while (m--)
    {
        cin >> c;
        // if (nums[c] != li.end())
        //     // 这个不稳啊。。因为你这时候删掉。他如果等于end
        //     // end指的是动态的位置啊。。
        //     li.erase(nums[c]), nums[c] = li.end();
        if (vis[c] == 0)
            li.erase(nums[c]);
        vis[c] = 1;
    }
    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); ++it)
        cout << *it << " ";
    return 0;
}
// 这是什么人才啊。。
// 好离谱啊。。
// 他用数组 来存链表的地址。。
// 这样子。就把链表find 的缺点给弥补掉了
// 离离原上谱啊。。。
// 呈现在天气还不热。。环境好。。多冲。。
// 他还是按值存的。。所以就可以按值索引。
// 实现常数级别的。
#include <bits/stdc++.h>
using namespace std;
int vis[100001];
// 一个不够 。。这里又建了一个数组 用来标记 。。❤️
list<int> li;
list<int>::iterator nums[100001];
int main()
{
    int n, m;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        int a, b;
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.emplace(it, i);
        else
            nums[i] = li.emplace(++it, i);
        // 这边是因为知道这个it 只用一次。。所以这样 。不然这个it 要再建个变量
    }
    cin >> m;
    while (m--)
    {
        int c;
        cin >> c;
        if (!vis[c])
            li.erase(nums[c]);
        vis[c] = 1;
    }
    for (int n : li)
        cout << n << " ";
    // 链表里面的元素 他直接就拿到了int 元素了。。
    // 这样枚举 比用迭代器爽多了。
    return 0;
}
// 因为他后面就没有再添加了。。所以用end的地址是不变的。
// 所以这个vis 数组是可以省略的
// 或者我们申请一个迭代器。。
// 这边主要迭代器 不能用！=指针 这个符号。
// 迭代器他不能用来和指针比较。。。。。。。。。
// 迭代器他不能用来和指针比较。。。。。。。。。
// 迭代器他不能用来和指针比较。。。。。。。。。it!=nullptr 是不行的。
int main()
{
    int n, a, b, m;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.emplace(it, i);
        else
            nums[i] = li.emplace(++it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (!vis[a])
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int l : li)
        cout << l << " ";
    return 0;
}
// 链表里面的元素 就是单纯的元素。
// 用链表的值 反向用数组存他的地址。
// 这样就能在一些场合弥补链表的问题。
//  看到了no1 那个级别的很大体量的题目了。。
// 喜欢在洛谷 1是因为这里题目有趣。2是解法有趣。3这里的写法也有趣。。
// 只要你的算法品味是正常的。。一般都会喜欢洛谷。而不是leetcode。。leetcode 说实话有点垃圾。
int main()
{
    int n, a, b, m;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (vis[a] == 0)
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int l : li)
        cout << l << " ";
    return 0;
}
int main()
{
    int n, a, b, m;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(++it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (!vis[a])
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int l : li)
        cout << l << " ";
    return 0;
}
int main()
{
    int n, a, b, m;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(++it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (!vis[a])
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int i : li)
        cout << i << " ";
    return 0;
}
int main()
{
    int n, m, a, b;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(++it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (!vis[a])
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int i : li)
        cout << i << " ";
    return 0;
}
// 那个体量的题目。。泥马 。。有点想要。。
int main()
{
    int n, m, a, b;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(++it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (!vis[a])
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int i : li)
        cout << i << " ";
    return 0;
}
int main()
{
    int n, m, a, b;
    cin >> n;
    li.push_back(1);
    nums[1] = li.begin();
    for (int i = 2; i <= n; ++i)
    {
        cin >> a >> b;
        auto it = nums[a];
        if (!b)
            nums[i] = li.insert(it, i);
        else
            nums[i] = li.insert(++it, i);
    }
    cin >> m;
    while (m--)
    {
        cin >> a;
        if (!vis[a])
            li.erase(nums[a]);
        vis[a] = 1;
    }
    for (int l : li)
        cout << l << " ";
    return 0;
}
// 要量 要速度的。。才是你的。。不要觉得看懂了就是你的 那是错的。。
// 要大量+熟练才是你的。
// 要大量+熟练才是你的。
// 要大量+熟练才是你的。
// 要大量+熟练才是你的。
// 要大量+熟练才是你的。
// 要大量+熟练才是你的。
// 他是用链表 来插入和删除。但是用数组来记录链表的节点地址。用来找节点。。
// 他这里的数组其实是哈希表的作用了。因为他数据知道范围才能这样弄。。
// 本质上还是哈希+链表的组合。。