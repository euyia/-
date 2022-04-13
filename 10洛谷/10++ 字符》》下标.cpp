#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for (int i = 0; i < 3; ++i)
        cin >> a[i];
    sort(a, a + 3);
    int b[3];
    iota(b, b + 3, 0);
    string s;
    cin >> s;
    auto cmp = [&](int x, int y)
    {
        return s[x] < s[y];
    };
    sort(b, b + 3, cmp);
    for (int i = 0; i < 3; ++i)
        cout << a[b[i]] << " ";
    return 0;
}
// 不知道这个为啥不行。。
// 但是看到了一个更牛逼的思路。
// 他这里对目标元素。。和数组下标进行了转化。
// 直接把元素转成下标。。
// 直接把元素转成下标。。
// 直接把元素转成下标。。
int main()
{
    int a[3];
    for (int i = 0; i < 3; ++i)
        cin >> a[i];
    char A, B, C;
    cin >> A >> B >> C;
    cout << a[A - 'A'] << " " << a[B - 'A'] << " " << a[C - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    for (int i = 0; i < 3; ++i)
        cin >> nums[i];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
//虽然看起来好像很简洁。。但是非常牛逼的。。
// 简约！=简单。
int main()
{
    int nums[3];
    for (int i = 0; i < 3; ++i)
        cin >> nums[i];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] << nums[2] << nums[1];
    sort(nums, nums + 3);
    char a, b, c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] << nums[2];
    // 很牛逼的是它可以这样隔着空格。。用cin 一个个取出来。。
    // 补上这些看似简单的基础。
    // 我要补上。因为这些基础才是利器。。
    //  多刷。。狠狠的补上这些应有的基础空白。。根基。。
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] << nums[1] << nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
// 这题核心是字符-》下标。。。。。
int main()
{
    int nums[3];
    cin >> nums[0] << nums[1] << nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] << nums[1] << nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout < nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
// 字符转下标。
// 下标本身也是数字而已。。
// 互通了。。
// 下标本质上也是普通的数字。。
// 下标 本质上 也只是连续的数字而已
// 下标 本质上 也只是连续的数字而已
// 下标 本质上 也只是连续的数字而已

int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << numa[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[2] >> nums[1];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
int main()
{
    int nums[3];
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums, nums + 3);
    char a, b, c;
    cin >> a >> b >> c;
    cout << nums[a - 'A'] << nums[b - 'A'] << nums[c - 'A'];
    return 0;
}
// 有时候把自己看成手艺人。。
// 更加知道要怎么练习。。
// 脑艺人。。。