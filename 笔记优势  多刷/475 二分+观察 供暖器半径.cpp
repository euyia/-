#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
class Solution
{
public:
    string nearestPalindromic(string n)
    {
        long k = pow(10, 18);
        // 这个量级太大了。。不是2的18次方是10的。。你搞错了。
        unordered_map<string, int> mp;
        for (int i = 1; i < k; ++i)
        {
            string t = to_string(i);
            string s = t;
            reverse(t.begin(), t.end());
            // 可以这样写。当时返回的是void
            if (s == t)
                mp[s] = 1;
        }
        string k1 = n, k2 = n;
        int cnt1 = 0, cnt2 = 0;
        while (1)
        {
            int w = stoi(k1);
            w--;
            k1 = to_string(w);
            cnt1++;
            if (mp.count(k1))
                break;
        }
        while (2)
        {
            int w = stoi(k2);
            w++;
            k2 = to_string(w);
            cnt2++;
            if (mp.count(k2))
                break;
        }
        if (cnt2 < cnt1)
            return k2;
        return k1;
    }
};
// 简单模拟是不行的。超时。
// 肯定还要发现一些规律。
class Solution
{
public:
    int findRadius(vector<int> &a, vector<int> &b)
    {
        int ans = 0, d = (int)2e9;
        sort(b.begin(), b.end());
        //评论中看到的一句话精华：对于每个房屋，要么用前面的暖气，要么用后面的，二者取近的，得到距离
        int n = a.size();
        int m = b.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= b[0])
                d = b[0] - a[i];
            else if (a[i] >= b[m - 1])
                d = a[i] - b[m - 1];
            else
            {
                int l = 0, r = m - 1;
                while (l < r)
                {
                    int mid = (l + r) >> 1;
                    if (b[mid] < a[i])
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid;
                    }
                }
                d = min(b[l] - a[i], a[i] - b[l - 1]);
            }
            ans = max(ans, d);
        }
        return ans;
    }
};

class Solution
{
public:
    int findRadius(vector<int> &a, vector<int> &b)
    {
        int n = a.size();
        int m = b.size();
        sort(b.begin(), b.end());
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int mint;
            if (a[i] > b[m - 1])
                mint = a[i] - b[m - 1];
            else if (a[i] < b[0])
                mint = b[0] - a[i];
            else
            {
                int l = 0, r = m - 1;
                while (l < r)
                {
                    int mid = (l + r) >> 1;
                    if (a[i] > b[mid])
                        r = mid + 1;
                    else
                    {
                        l = mid;
                    }
                }
                mint = min(a[i] - b[l - 1], b[l] - a[i]);
            }
            ans = max(ans, mint);
        }
        return ans;
    }
};