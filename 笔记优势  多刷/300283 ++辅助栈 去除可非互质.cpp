#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
// 这题看起来是很简单。但是实际上是不简单的。很多人说简单。但是ac的人又多少。
// 所以真的有时候别听任何人的。。
// 有些明明很简单。但是却被说很难 比如c。。有些很难就告诉你狠简单。。打击信心。。
class Solution
{
public:
    vector<int> replaceNonCoprimes(vector<int> &nums)
    {
        vector<int> s;
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            s.push_back(nums[i]);
            // 这个要放在上面。。不然结构不对。
            // 因为最后一个放进去的就不会处理了。如果放在循环下面的话。
            while (s.size() > 1)
            {
                int r = s.back();
                int l = s[s.size() - 2];
                int g = gcd(r, l);
                if (g == 1)
                    break;
                s.pop_back();
                s.back() *= r / g;
                // 就是乘以另外一个数字除以公约数的机
            }
        }
        return s;
    }
};

vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int l = s.back();
            int r = s[s.size() - 2];
            int g = gcd(r, l);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= l / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < s.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
vector<int> soso(vector<int> &nums)
{
    vector<int> s;
    for (int i = 0; i < nums.size(); ++i)
    {
        s.push_back(nums[i]);
        while (s.size() > 1)
        {
            int r = s.back();
            int l = s[s.size() - 2];
            int g = gcd(l, r);
            if (g == 1)
                break;
            s.pop_back();
            s.back() *= r / g;
        }
    }
    return s;
}
// 习得就是以他的样子动作。。去做遍数多。。
// 学习不是玄学。。就是这样朴实无华的动作重复 方能成就伟大。。
//