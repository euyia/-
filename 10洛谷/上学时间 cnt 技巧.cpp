#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
// 这是之前的提交。。他输出只要能输出那个样子。就可以了。。
// 他都不要求一定是统一的字母还是啥。。
int main()
{
    int s, v;
    cin >> s >> v;
    int t = s / v;
    int r = s % v;
    r = s % v == 0 ? 0 : 1;
    int sum = 7 * 60 + 50 - r;
    sum -= t;
    if (sum >= 0)
    {

        string t = sum % 60 >= 10 ? to_string(sum % 60) : "0" + to_string(sum % 60);
        cout << "0" + to_string(sum / 60) << ":" << t;
    }
    else
    {
        sum += 24 * 60;
        string l = sum / 60 >= 10 ? to_string(sum / 60) : "0" + to_string(sum / 60);
        string t = sum % 60 >= 10 ? to_string(sum % 60) : "0" + to_string(sum % 60);
        cout << l << ":" << t;
    }

    return 0;
}

int main()
{
    int s, v;
    cin >> s >> v;
    int t = s / v;
    int mod = s % v == 0 ? 0 : 1;
    int sum = 7 * 60 + 50 - mod;
    sum -= t;
    if (sum < 0)
        sum += 24 * 60;
    int l = sum / 60, r = sum % 60;
    if (l < 10)
    {
        if (r < 10)
            cout << "0" << l << ":0" << r;
        else
            cout << "0" << l << ":" << r;
    }
    else
    {
        if (r < 10)
            cout << l << ":0" << r;
        else
            cout << l << ":" << r;
    }
    return 0;
}
// 这种混合拼接cout的方式。他是允许的。。
// 、R72619463