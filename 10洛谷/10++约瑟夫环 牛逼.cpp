#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#include <cstdio>
using namespace std;
int main()
{
    int n, m, s = 0;
    scanf("%d%d", &n, &m); //入读
    bool visit[200] = {0}; //visit赋初始值
    for (int k = 0; k < n; k++)
    { //总共要出队n次
        for (int i = 0; i < m; i++)
        {
            if (++s > n)
                s = 1;
            if (visit[s])
                i--;
        } //类似取模，而因为序列是从1开始的，所以不取模，加判断；若visit过，则i--，使其继续循环
        printf("%d ", s);
        visit[s] = true; //输出，记录已出队
    }
    return 0;
}
// 他这个是设定 让s 在有效的元素里面一直跑。
// 就一直循环的的跑。。然后s只管跑。。他所指的是有效的下标。。
// 然后外圈i是记住有效个数。。
// 好奇妙的套圈。。

int n, a, b;
int main()
{
    int vis[101]{0};
    cin >> n >> b;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            if (++a > n)
                a = 1;
            if (vis[b])
                j--;
        }
        cout << a << " ";
        // 这个用换行代替空格可以吗
        vis[a] = 1;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n >> a;
    // 1 循环到没
    //  当循环的次数==目标的话。就重置。然后pop掉一个
    // 不等的时候就用对列倒。。
    queue<int> q;
    for (int i = 1; i <= n; ++i)
        q.push(i);
    int c = 1;
    while (q.size())
    {
        if (c == a)
        {
            cout << q.front() << " ";
            q.pop();
            c = 1;
        }
        else
        {
            q.push(q.front());
            q.pop();
            c++;
        }
    }
    return 0;
}

// 这两种解法  无论那种 都比递归有趣的多。
// 特别第一种模拟。。
// 结构很美。
int main()
{
    int n, a, c;
    cin >> n >> a;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < a; ++j)
        {
            if (++c > n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
// c一直指向元素。然后j是在计算次数
// vis 缩小方位。。
// 。。非常精简。
int n, m, c;
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (c == n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << "";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (c == n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (c == n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (++c > n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (++c > n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (++c > n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (++c > n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
int main()
{
    cin >> n >> m;
    int vis[100]{0};
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (++c > n)
                c = 1;
            if (vis[c])
                j--;
        }
        cout << c << " ";
        vis[c] = 1;
    }
    return 0;
}
// 这个设计还是有很多巧妙的地方的。。
// 还可以继续刷吸收
// 但是重复计算太多了。不是很实用。
// 队列那个好一点。