#include <all.h>
using namespace std;
// 在He看着贼乱。。。归并排序。
// 虽然看视频懂了他是什么原理
// 比如5 4 3 2 1 就是 4+3+2+1个。。
// 然后再归并排序的时候 就有这样的一个契机能够统计比前面比他大的个数。
class Solution
{
public:
    int a[50005], b[50005];
    int sum = 0;
    int cp[50005];
    void merge(int l1, int r1, int l2, int r2)
    {
        for (int i = l1; i <= r1; i++)
            a[i] = cp[i];
        for (int i = l2; i <= r2; i++)
            b[i] = cp[i];
        int st1 = l1, st2 = l2;
        int cnt = l1;
        while (st1 <= r1 && st2 <= r2)
        {
            if (a[st1] <= b[st2])
            {
                cp[cnt++] = a[st1++];
            }
            else
            {
                cp[cnt++] = b[st2++];
                sum += r1 - st1 + 1;
                // 在这里统计  也就是当右边的要合并进去的时候统计。像上面if 也就是组边合并进入的时候不用
                // 这个真的是很奇妙。。归并排序的过程中。附带的一个这个功能吧。。
                // 感觉一下就理解了。。
                // 他不管这个元素是什么。他就是单纯计算里面存在的逆序的个数。。
                // 他不管这个元素是什么。他就是单纯计算里面存在的逆序的个数。。
                // 他不管这个元素是什么。他就是单纯计算里面存在的逆序的个数。。
                // 非常爽的一个抽象程度。。
            }
        }
        for (int i = st1; i <= r1; i++)
            cp[cnt++] = a[i];
        for (int i = st2; i <= r2; i++)
            cp[cnt++] = b[i];
    }
    void merge_sort(int l, int r)
    {
        if (l >= r)
            return;
        int mid = (l + r) >> 1;
        merge_sort(l, mid);
        merge_sort(mid + 1, r);
        merge(l, mid, mid + 1, r);
        // 哈哈哈。这其实是后序遍历的位置。。只不过他后序处理的动作
        // 刚好又是merge而已。。知道这个思路就很清晰了。
        // 而且他这里的sort写法比教材上的好。。变量少。。。。
        // 又看了下其实一样的。。因为他这里写成全局数组而已。
    }
    int reversePairs(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
            cp[i + 1] = nums[i];
        merge_sort(1, nums.size());
        return sum;
    }
};

class Solution
{
public:
    int reversePairs(vector<int> &nums)
    {
    }
    void dfs(int l, int lend, int r, int rend)
    {
        // 他怎么设计 数组来回倒的。
        // 怎么嵌套的。。
    }
};

class Solution
{
public:
    int a[50005], b[50005];
    int sum = 0;
    int cp[50005];
    void merge(int l1, int r1, int l2, int r2)
    {
        for (int i = l1; i <= r1; i++)
            a[i] = cp[i];
        for (int i = l2; i <= r2; i++)
            b[i] = cp[i];
        int st1 = l1, st2 = l2;
        int cnt = l1;
        while (st1 <= r1 && st2 <= r2)
        {
            if (a[st1] <= b[st2])
            {
                cp[cnt++] = a[st1++];
            }
            else
            {
                cp[cnt++] = b[st2++];
                sum += r1 - st1 + 1;
            }
        }
        for (int i = st1; i <= r1; i++)
            cp[cnt++] = a[i];
        for (int i = st2; i <= r2; i++)
            cp[cnt++] = b[i];
    }
    void merge_sort(int l, int r)
    {
        if (l >= r)
            return;
        int mid = (l + r) >> 1;
        merge_sort(l, mid);
        merge_sort(mid + 1, r);
        merge(l, mid, mid + 1, r);
    }
    int reversePairs(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
            cp[i + 1] = nums[i];
        merge_sort(1, nums.size());
        return sum;
    }
};

int a[50005], b[50005];
class Solution
{
public:
    vector<int> a, b;
    int sum = 0;
    int reversePairs(vector<int> &nums)
    {
        // for (int i = 0; i < nums.size(); i++)
        //     a[i] = nums[i];
        a = nums;
        b = nums;
        dfs(0, nums.size() - 1);
        return sum;
    }
    void soso(int l, int r, int rend)
    {
        int lend, n, tmp;
        tmp = l;
        lend = r - 1;
        n = rend - l + 1;
        while (l <= lend && r <= rend)
        {
            if (a[l] <= a[r])
                b[tmp++] = a[l++];
            else
            {
                b[tmp++] = a[r++];
                sum += lend - l + 1;
            }
        }
        while (l <= lend)
            b[tmp++] = a[l++];
        while (r < rend)
            b[tmp++] = a[r++];
        // for (int i = 0; i < n; ++i, rend--)
        //     a[rend] = b[rend];
        a = b;
        // 知道为什么不用leftend了。因为只是中点啊。。才覆盖了一半。
    }
    void dfs(int l, int rend)
    {
        int mid;
        if (l < rend)
        {
            // 当l=r的时候就不需要继续递归
            //他是划分区间 不是找数字。。所以区间要完整。找数字这里可以mid-1
            mid = (l + rend) / 2;
            dfs(l, mid);
            dfs(mid + 1, rend);
            // 这个下面这个build 是根据上面的左右递归来的 所以mid+1 要和上面的一致。
            soso(l, mid + 1, rend);
        }
    }
};
int sum = 0;
int a[50005], b[50005];

class Solution
{
    int sum = 0;
    int a[50005], b[50005];

public:
    int reversePairs(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); ++i)
            a[i] = nums[i];
        dfs(0, nums.size() - 1);
    }
    void soso(int l, int r, int rend)
    {
        int tmp = l, lend = r - 1, n = rend - l + 1;
        while (l <= lend && r <= rend)
        {
            if (a[l] <= a[r])
                b[tmp++] = a[l++];
            else
            {
                b[tmp++] = a[r++];
                sum += lend - l + 1;
            }
        }
        while (r <= rend)
            b[tmp++] = a[r++];
        while (l <= lend)
            b[tmp++] = a[l++];
        for (int i = 0; i < n; i++, rend--)
            a[rend] = b[rend];
    }
    void dfs(int l, int rend)
    {
        if (l < rend)
        {
            int mid = (l + rend) / 2;
            dfs(l, mid);
            dfs(mid + 1, rend);
            soso(l, mid + 1, rend);
        }
    }
};

int sum = 0;
int a[50005], b[50005];
int reversePairs(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (r <= rend)
        b[tmp++] = a[r++];
    while (l <= lend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l < rend)
    {
        int mid = (l + rend) / 2;
        dfs(l, mid);
        dfs(mid + 1, rend);
        soso(l, mid + 1, rend);
    }
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r < rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
    // 4w算法。。哈哈哈。。
}
void dfs(int l, int rend)
{
    if (l < rend)
    {
        int mid = (l + rend) / 2;
        dfs(l, mid);
        dfs(mid + 1, rend);
        soso(l, mid + 1, rend);
    }
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
}
void soso(int l, int r, int rend)
{
    int up = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[up++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[up++] = a[r++];
        }
    }
    while (r <= rend)
        b[up++] = a[r++];
    while (l <= lend)
        b[up++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= b[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (r <= rend)
        b[tmp++] = a[r++];
    while (l <= lend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
// 4w算法 概括的该不多。。多刷 多操 多赚。。哈哈哈

void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            b[tmp++] = a[r++];
            sum += lend - l + 1;
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            b[tmp++] = a[r++];
            sum += lend - l + 1;
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void dfs(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            b[tmp++] = a[r++];
            sum += lend - l + 1;
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = (l + rend) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
// 要有个量化标准 不然今天跑1公里明天跑10公里。不好。
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (r <= rend)
        b[tmp++] = a[r++];
    while (l <= lend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = b[l++];
    while (r <= rend)
        b[tmp++] = b[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r < rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r < rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r < rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (r <= rend && l <= lend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            b[tmp++] = a[r++];
            sum += lend - l + 1;
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (r <= rend)
        b[tmp++] = a[r++];
    while (l <= lend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int ren)
{
    int tmp = l, n = ren - l + 1, lend = r - 1;
    while (l <= lend && r < ren)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= ren)
        b[tmp++] = a[r++];
    while (n--)
        a[ren--] = b[ren];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r < rend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] < a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
int koko(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
        a[i] = nums[i];
    dfs(0, n - 1);
    return sum;
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = b[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = rend - l + 1;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
class Solution
{
public:
    int findKthNumber(int n, int k)
    {
        int cur = 1;
        k = k - 1; //扣除掉第一个0节点
        while (k > 0)
        {
            int num = getNode(n, cur, cur + 1);
            if (num <= k)
            {             //第k个数不在以cur为根节点的树上
                cur += 1; //cur在字典序数组中从左往右移动
                k -= num;
            }
            else
            {              //在子树中
                cur *= 10; //cur在字典序数组中从上往下移动
                k -= 1;    //刨除根节点
            }
        }
        return cur;
    }
    int getNode(int n, long first, long last)
    {
        int num = 0;
        while (first <= n)
        {
            num += min((long)n + 1, last) - first; //比如n是195的情况195到100有96个数
            first *= 10;
            last *= 10;
        }
        return num;
    }
};
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l < lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] < a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (r <= rend)
        b[tmp++] = a[r++];
    while (l <= lend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}

void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid + 1, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (r <= rend && l <= lend)
    {
        if (a[l] < a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[l++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l == rend)
        return;
    int mid = l + (rend - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, rend);
    soso(l, mid, rend);
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (r <= rend)
        b[tmp++] = a[r++];
    while (l <= lend)
        b[tmp++] = a[l++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, n = rend - l + 1, lend = r - 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[r] >= a[l])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void dfs(int l, int rend)
{
    if (l < rend)
    {
        int mid = l + (rend - l) / 2;
        dfs(l, mid);
        dfs(mid + 1, rend);
        soso(l, mid + 1, rend);
    }
}
void dfs(int l, int rend)
{
    if (l < rend)
    {
        int mid = l + (rend - l) / 2;
        dfs(l, mid);
        dfs(mid + 1, rend);
        soso(l, mid + 1, rend);
    }
}
void soso(int l, int r, int rend)
{
    int tmp = l, lend = r - 1, n = rend - l + 1;
    while (l <= lend && r <= rend)
    {
        if (a[l] <= a[r])
            b[tmp++] = a[l++];
        else
        {
            sum += lend - l + 1;
            b[tmp++] = a[r++];
        }
    }
    while (l <= lend)
        b[tmp++] = a[l++];
    while (r <= rend)
        b[tmp++] = a[r++];
    while (n--)
        a[rend--] = b[rend];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (l <= le && r <= re)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (l <= le && r <= re)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (l <= le && r <= re)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += re - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (l <= le && r <= re)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
void dfs(int l, int re)
{
    if (l == re)
        return;
    int mid = l + (re - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, re);
    soso(l, mid + 1, re);
}
void dfs(int l, int re)
{
    if (l < re)
    {
        int mid = l + (re - l) / 2;
        dfs(l, mid);
        dfs(mid + 1, re);
        soso(l, mid + 1, re);
    }
}
void dfs(int l, int re)
{
    if (l == re)
        return;
    int mid = l + (re - l) / 2;
    dfs(l, mid);
    dfs(mid + 1, re);
    soso(l, mid + 1, re);
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (r <= re && l <= le)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (l <= le && r <= re)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[l++];
        }
    }
    while (r <= re)
        b[t++] = a[r++];
    while (l <= le)
        b[t++] = a[l++];
    while (n--)
        a[re--] = b[re];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (r <= re && l <= le)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
void soso(int l, int r, int re)
{
    int t = l, le = r - 1, n = re - l + 1;
    while (l <= le && r <= re)
    {
        if (a[l] <= a[r])
            b[t++] = a[l++];
        else
        {
            sum += le - l + 1;
            b[t++] = a[r++];
        }
    }
    while (l <= le)
        b[t++] = a[l++];
    while (r <= re)
        b[t++] = a[r++];
    while (n--)
        a[re--] = b[re];
}
// 不要你觉得好像熟练了。好像会了
// 数量要卡死。。
// 1000行就一千行。。。。。。