#include <all.h>
using namespace std;
class Solution
{
public:
    string repeatLimitedString(string s, int k)
    {
        sort(s.rbegin(), s.rend());
        int l = 0;
        int n = s.size();
        if (n <= k)
            return s;
        int t = 0;
        while (l < n - k)
        {
            int r = l + 1;
            if (s[l] == s[r])
            {
                while (r < n && s[r] == s[r + 1] && r - l < k)
                    ++r;
                if (r - l == k)
                {
                    l = r;
                    r = max(t, l + 1);
                    while (r < n && s[l] == s[r])
                        ++r;
                    if (r < n)
                    {
                        swap(s[l], s[r]);
                        t = r;
                    }
                    else
                    {
                        return s.substr(0, l);
                    }
                }
            }
            l++;
        }
        return s;
    }
};

class Solution
{
public:
    string repeatLimitedString(string s, int repeatLimit)
    {
        string res;
        res = s;
        sort(res.rbegin(), res.rend());
        //cout << res << endl;
        //双指针 left代表要交换的第一个字母的下标（多于repeatlimit数量的第一个字母），right代表要交换的第二个字母的下标
        //在示例cczazcc里指从“zzcccca” left指向第四个c，right指向a
        int cnt = 1;
        for (int left = 1, right = 2; left < res.size(); ++left)
        {
            if (res[left - 1] != res[left])
            {
                cnt = 1; //重置cnt的值
            }
            else
            {
                ++cnt;
                if (cnt > repeatLimit)
                {
                    right = max(right, left + 1);
                    //找到不同于当前区间字母的第一个字母的下标
                    while (right < res.size() && res[left] == res[right])
                    {
                        ++right;
                    }
                    if (right < res.size())
                    {
                        swap(res[left], res[right]); //交换指定的两个字母
                        cnt = 1;
                    }
                    else
                    {
                        //直接删除多余的字母，后面没有可交换的字母了
                        res.erase(res.begin() + left, res.end());
                        break;
                    }
                }
            }
        }
        return res;
    }
};