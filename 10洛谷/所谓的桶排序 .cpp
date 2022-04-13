#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
int n, k, x, y, z;
int a, b, c;
int nums[1001];
int main()
{
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (nums[a] == 0)
            b++;
        nums[a]++;
        if (nums[a] > cnt)
            cnt = nums[a];
    }
    cout << cnt << " " << b;
    return 0;
}
// 这题的方法很特别 虽然我想出来了。。但是这种数据组织方式 角度是垂直的。。
// 桶排序。。就是把数组的每个位置当做一个桶。
// 数量小 就不要用map 原始数组是最快的最好的选择。map 能不用就不用。