#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 一个很猛的写法
// 速度提升了10倍。
// 这种不知道怎么设计出来的。。他是利用定长的特点。。
// 外面的i 只需要偏移那个单词的定长 就能覆盖所有的可能。。
// 也不知道他是围绕什么样的逻辑 设计出来。
// 内层循环设计 也很猛。。。。关键是它速度贼快。。。回头在看吧。。现在看不懂。
// 他这个解法 感觉就很依赖这个定长设定

class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &str)
    {
        unordered_map<string_view, pair<int, int>> dict;
        for (auto &i : str)
            ++dict[i].first;
        int n = s.size(), m = str.size(), len = str[0].size();
        string_view sv = s;
        vector<int> ans;
        for (int i = 0; i < len; ++i)
        {
            for (auto v : dict)
                v.second.second = 0;
            int count = 0;
            for (int j = i; j <= n - len; j += len)
            {
                auto iter = dict.find(sv.substr(j, len));
                if (iter != dict.end())
                {
                    ++iter->second.second;
                    if (iter->second.first == iter->second.second)
                        ++count;
                    // 这种就是当前单词符合。
                    else if (iter->second.first == iter->second.second - 1)
                        --count;
                    // 这种就是窗口单词有一个重复的。。那这里用计数减少来标记
                }
                if (j - m * len >= 0)
                {
                    iter = dict.find(sv.substr(j - m * len, len));
                    // 这个是回头删除之前长度的第一个。滑动  就是删前面 +后面嘛。
                    if (iter != dict.end())
                    {
                        --iter->second.second;
                        if (iter->second.first == iter->second.second)
                            ++count;
                        // 案例说要小于。。但是这里等于。。所以说明原来里面多了。
                        // 说明目前还是不对。。他这里利用cont++来做标记。
                        else if (iter->second.first == iter->second.second + 1)
                            --count;
                    }
                }
                if (count == dict.size())
                    ans.push_back(j - m * len + len);
                // 他加的这个位置 就是 串口移动之后的第一个位置。
                // 因为j-m*len是要删除的
                // 再加个len 就是目前合法的第一个。。
            }
        }
        return ans;
    }
};
// 可以给他改写成双mp的
class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &nums)
    {
        int n = nums.size();
        dfs(nums, n, 0, " ");
        int k = nums[0].size() * n;
        vector<int> ans;
        for (int i = 0; i < s.size(); ++i)
        {
            if (dp[s.substr(i, k)])
                continue;
            ans.push_back(i);
        }
        return ans;
    }
    // vector<string> res;
    unordered_map<string, int> dp;
    unordered_map<int, int> mp;
    void dfs(vector<string> &nums, int n, int count, string s)
    {
        if (count == n)
        {
            dp[s] = 1;
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            if (!mp[i])
            {
                mp[i] = 1;
                string t = s + nums[i];
                dfs(nums, n, count + 1, t);
                mp[i] = 0;
            }
        }
    }
};
// 我这里是把他们拼成一起之后再用vector去查找。。
// 有两个地方非常吃速度
// 1 是建立这个vetor  2 是用vector 要遍历。
// 到151的时候就爆了。。
// 1 他这里用dp 。而且这个遍历记录的方式 非常值得学习。。
// 他只一个个的去加。。只要出现不吻合的。。立马退出。。能非常有效减低无效搜索。。
// 他这个第二层循环 就非常棒。
// 然后两个mp 之间的互动 也非常的棒。。
class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &a)
    {
        int n = a.size();
        vector<int> ans;
        if (n == 0)
            return ans;
        int size = a[0].size();
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for (int i = 0; i < n; ++i)
            mp1[a[i]]++;
        for (int i = 0; i + size * n <= s.size(); ++i)
        {
            int j = i;
            for (; j + size <= s.size(); j += size)
            {
                string t = s.substr(j, size);
                if (++mp2[t] > mp1[t])
                    break;
            }
            if (j - i == size * n)
                ans.push_back(i);
        }
        return ans;
    }
};
unordered_map<string, int> mp1;
unordered_map<string, int> mp2;
vector<string> aa;
unordered_map<string, int> a;
unordered_map<string, int> b;
vector<string> str;
string s;
vector<int> soso()
{
    vector<int> ans;
    int n = aa.size();
    if (n == 0)
        return ans;
    int size = aa[0].size();
    for (string c : aa)
        mp1[c]++;
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++mp2[t] > mp2[t])
                break;
        }
        if (j - i == size * n)
            ans.push_back(i);
    }
    return ans;
}
vector<int> soso()
{
    vector<int> ans;
    int n = s.size();
    if (n == 0)
        return ans;
    int size = str[0].size();
    for (string c : str)
        a[c]++;
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == size * n)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    vector<int> ans;
    int n = str.size();
    if (n == 0)
        return ans;
    int size = str[0].size();
    for (string c : str)
        a[c]++;
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    vector<int> ans;
    int n = str.size();
    if (n == 0)
        return ans;
    int size = str[0].size();
    for (string c : str)
        a[c]++;
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == size * n)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    vector<int> ans;
    int n = str.size();
    if (n == 0)
        return ans;
    int size = str[0].size();
    for (string c : str)
        a[c]++;
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    vector<int> ans;
    int n = str.size();
    if (n == 0)
        return ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    vector<int> ans;
    int n = str.size();
    if (n == 0)
        return ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    int n = str.size();
    vector<int> ans;
    if (n == 0)
        return ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    int n = str.size();
    vector<int> ans;
    if (n == 0)
        return ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    int n = str.size();
    vector<int> ans;
    if (n == 0)
        return ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == size * n)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    int n = str.size();
    vector<int> ans;
    if (n == 0)
        return ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    int n = str.size();
    vector<int> ans;
    if (n == 0)
        return ans;
    int size = str[0].size();
    for (string c : str)
        a[c]++;
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
vector<int> soso()
{
    int n = str.size();
    if (n == 0)
        return {};
    vector<int> ans;
    for (string c : str)
        a[c]++;
    int size = str[0].size();
    for (int i = 0; i + size * n <= s.size(); ++i)
    {
        int j = i;
        for (; j + size <= s.size(); j += size)
        {
            string t = s.substr(j, size);
            if (++b[t] > a[t])
                break;
        }
        if (j - i == n * size)
            ans.push_back(i);
        b.clear();
    }
    return ans;
}
// 脑子也是肌肉记忆。。
// 刷成条件反射。。考场怎么会有时间让你想。。
// 条件反射才是对的。
class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &str)
    {

        unordered_map<string, int> mp1, mp2;
        for (string c : str)
            mp1[c]++;

        int size = str[0].size();
        int n = str.size();
        vector<int> ans;
        // 上面都一样的初始化
        for (int k = 0; k < size; k++)
        {
            int i = k, j = k;
            while (i < s.size() - n * size + 1)
            {
                while (j < i + n * size)
                {
                    string t = s.substr(j, size);
                    mp2[t]++;
                    j += size;
                    if (mp1[t] == 0)
                    {          //情况二，有str中不存在的单词
                        i = j; //对i加速
                        mp2.clear();
                        break;
                    }
                    else if (mp2[t] > mp1[t])
                    { //情况三，子串中t数量超了
                        // 这一步很精髓的。。
                        // 他调整了i j 又不需要重置mp2.。。只是调整。
                        while (mp2[t] > mp1[t])
                        {
                            mp2[s.substr(i, size)]--;
                            i += size; //对i加速
                        }
                        break;
                    }
                }
                //正确匹配，由于情况二和三都对i加速了，不可能满足此条件
                // 这优化核心在这里。。他只祛除了一小节并不完全重置。
                // 对i进行增加。然后j继续前景。
                if (j == i + size * n)
                {
                    ans.push_back(i);
                    mp2[s.substr(i, size)]--;
                    i += size; //i正常前进
                }
            }
            mp2.clear();
        }
        return ans;
    }
};
// 10倍 非常有价值的。。
// 虽然这个算法 收到定长单词的限制。。但是我想会。

class Solution
{
public:
    unordered_map<string, int> mp1, mp2;
    vector<int> findSubstring(string sv, vector<string> &str)
    {
        for (auto &i : str)
            mp1[i]++;
        int n = sv.size(), m = str.size(), len = str[0].size();
        vector<int> ans;
        for (int i = 0; i < len; ++i)
        {
            int count = 0;
            for (int j = i; j <= n - len; j += len)
            {
                string t = sv.substr(j, len);
                if (mp1.count(t))
                {
                    // 只有mp1有的 他才+到mp2里面。
                    // mp1没有的 mp2 都不记录。
                    ++mp2[t];

                    if (mp1[t] == mp2[t])
                        ++count;
                    else if (mp1[t] == mp2[t] - 1)
                        --count;
                }
                if (j - m * len >= 0)
                {
                    t = sv.substr(j - m * len, len);
                    if (mp1.count(t))
                    {
                        --mp2[t];
                        if (mp1[t] == mp2[t])
                            ++count;
                        else if (mp1[t] == mp2[t] + 1)
                            --count;
                    }
                }
                if (count == mp1.size())
                    // 这里竟然不是等于m？？？？？？？？？？？
                    // 重复的good。。
                    // 默认能进入这个循环的 就是长度是ok的、、、？？？？
                    ans.push_back(j - m * len + len);
            }
            mp2.clear();
        }
        return ans;
    }
};
// 这解法很牛逼。也很稳定的框架。。不过就是有点费解。