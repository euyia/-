#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // multimet 可以写。
    // 但是太麻烦了。
    vector<pair<int, int>> nums;
    int mod = 86400;
    int n, a, b, c;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        for (int j = 0; j < b; ++j)
        {
            cin >> c;
            nums.push_back({a, -c});
            nums.push_back({a + mod, c});
            //  这样删 还要删区段。。
        }
    }
    sort(nums.begin(), nums.end());
    map<int, int> mp;
    int pre = -1, cur = -1;
    for (int i = 0; i < nums.size(); ++i)
    {
        auto n = nums[i];
        if (n.second < 0)
            mp[-n.second]++;
        else
        {
            if (--mp[n.second] == 0)
                mp.erase(n.second);
            if (i == n - 1 || n != nums[i + 1])
                cout << mp.size() << endl;
        }
    }
    return 0;
    // 删除比我想象的简单。他直接扣去就好了。。然后如果数量少于零
    // 这样就动态维护了一个有效的区间。
}
#include <iostream>
using namespace std;
int s, l, n, t, k, r, w[100001], x[300002], y[300002];
// w表示国籍的人数，x表示第几个人上来的国籍，y表示第几个人上来的时间
// 怎么有这种人啊。。太离谱了。。
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t;
            cin >> x[r];
            if (!w[x[r]])
                s++;
            w[x[r]]++;
        }
        // 其实本质上是滑动窗口，窗口大小就是86400 没读入一次数据。就像相当于滑动一次
        // 滑动完之后 从新判断新窗口内剩下的有效元素。
        // 上面是添加有效，下面是删除无效元素
        while (t - y[l] >= 86400)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
}
// 这个删除操作s--其实很好理解的。。他就是像那个top算法。里面的入度数删除之后做判断。
// 他这里就是骚操作而已。
// 他其实思路和我那个差不多的。。
// 就是动态的维护一个有效的区间 s。。
// 就是动态的维护一个有效的区间 s。。
// 就是动态的维护一个有效的区间 s。。
// 是这题模拟的精髓。。
// 他这边的i是指向两个不同的数组。但是这两个数组他的是同个数据。

// 不知道为啥。。先删再添加 就不行？？？？？
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[i] >= 86400)
            if (!--w[x[i]])
                s--;
        cout << s << endl;
    }
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= 86400)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= 86400)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> t;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t;
            cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t;
            cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (y - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
// 动态维护一个有效区间 本质上 都是滑动窗口。
// 只不过你用什么东西滑而已。。
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
//  虽然看起来好像很简单。。但是是因为他精髓。。
// 不然这个系统设计的变量和数据结构 已经非常庞大了。。
// 三个数组。还有5个变量 l r n t k s
// 这个数据结构的丰富度。已经非常nice了。。
// 这个数据结构的丰富度。已经非常nice了。。
// 这个数据结构的丰富度。已经非常nice了。。
// 越分析越清晰。。你看上面添加的部分。。都是涉及 r 右边窗口的移动。
// 下面删除都是涉及l 左边窗口的。
值得刷
// 短短几行 用到了10个变量。。
// 冲冲冲  冲上去当皇帝。。
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {

            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {

            y[++r] = t, cin >> x[r];
            if (!w[x[r]])
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t;
            cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
        if(!--w[x[l++])
            s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
// 一个很酷的解法你想要掌握 就要做次数。。
//次数是必须的。。1000 2000 打底。。不断的去琢磨 不断的加速。。
main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - x[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s--;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!-w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    // endl 和\n是等价的。。不是和空格。。
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> t >> k;
        while (k--)
        {
            y[++r] = t, cin >> x[r];
            if (!w[x[r]]++)
                s++;
        }
        while (t - y[l] >= mod)
            if (!--w[x[l++]])
                s--;
        cout << s << endl;
    }
    return 0;
}
// 不但首要动。脑子才是根本。。 要多琢磨 。
// 脑子才是根本。。手只是辅助。