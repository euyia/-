#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <bits/stdc++.h>
using namespace std;
#define MAX 101
struct tree
{
    int left, right;
    tree() : left(0), right(0){};
};

int dfs(tree nums[], int root)
{
    //   这样的算高度不行。。会在0的地方重复。。
    // 但是因为他是从1 开始定义的。我们只要 录入的时候从1开始录入 就不会死循环了。
    if (!root)
        return 0;
    return 1 + max(dfs(nums, nums[root].left), dfs(nums, nums[root].right));
}
tree nums[MAX];
// 这n要定义好。。这样就可以省略一个dfs的参数了。
main()
{

    int n;
    cin >> n;
    for (int i = 1; i < n; ++i)
        cin >> nums[i].left >> nums[i].right;
    cout << dfs(nums, 1);
    return 0;
}
int h(int root)
{
    if (!root)
        return 0;
    return 1 + max(h(nums[root].left), h(nums[root].right));
}
int soso()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; ++i)
        cin >> nums[i].left >> cin >> nums[i].right;
    // 这样简洁的直接录入到指定位置。。cin 很有意思
    cout << h(1);
    return 0;
}
// 是什么 为什么 优缺点，，多思考。
// 你要想拥有这个知识 很简单 就是多刷。。肌肉记忆。
// 这边用数组+一个tree结构 非常简洁的表示出了树。又有树的功能。