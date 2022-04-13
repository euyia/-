#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
class Solution
{
    // 操啊  这是我自己写的代码。泥马 现在回头都要看不懂了。
    // 这就体现了视频的重要性了有时候句句话弄清楚  自己看很费劲的。
public:
    unordered_map<int, int> mp;
    int vis[5005];
    vector<int> nums;
    string b;
    int ladderLength(string a, string b, vector<string> &c)
    {
        if (b != c[c.size() - 1])
            return 0;
        // 这边题目要求了。。必须是最后一个位置。。
        // 其实这道题目有点问题。。有写地方很不严谨
        //  然后随时检查。。只要能ok 就ok
        //  然后随时检查。。只要能ok 就ok
        //  然后随时检查。。只要能ok 就okÍ
        this->b = b;
        for (int i = 26; i >= 0; --i)
        {
            int mask = 0;
            mask |= 1 << i;
            for (int j = i - 1; j >= 0; --j)
            {
                mask |= 1 << j;
                mp[mask] = 1;
                mask ^= 1 << j;
            }
        }
        // 这里是要制造有两个偏差的1 的所有情况。
        for (auto c : b)
            bb |= 1 << (c - 'a');
        for (auto c : a)
            aa |= 1 << (c - 'a');
        vector<int> res(c.size(), 0);
        // 这边题目要求目标元素必须在数组里面。
        // 也就是
        for (int j = 0; j < c.size(); ++j)
        {
            for (int i = 0; i < c[j].size(); ++i)
            {
                res[j] |= 1 << (c[j][i] - 'a');
            }
        }
        // 这边是把c数组 转成数字化。。。
        nums = res;
        // k-1必然是目标。。也就是初始的 不里面。。然后我们就是
        dfs(0, aa, 0);
        return mint == INT_MAX ? 0 : mint;
    }
    int bb = 0, aa = 0;
    int mint = INT_MAX;
    void dfs(int count, int mk, int l)
    {
        if (l >= nums.size())
            return;
        if (mp.count(mk ^ bb))
        {
            mint = min(mint, count);
            return;
        }
        for (int i = 0; i < nums.size(); ++i)
        {
            // if (vis[i])
            //     continue;
            if (!mp.count(mk ^ nums[i]))
                continue;
            //   这样只考虑往前走。。并没有考虑前面的元素接在后面的情况。
            // 这个题目真的很诡异。。但是又是系列题。
            dfs(count + 1, nums[i], i + 1);
            // vis[i] = 0;
        }
    }
};
// 可以用程序 遍历。找到一个最短的 然后直接
// 这个大概率是可以反选的。。但是反选的话还要去除选过的。而且量级是指数级增长的。
// 不然这题的题意就是可以用层序遍历最短的是非常顺手的。
// 但是层序遍历无法维护范文的数组。。所以 用深度优先。。

class Solution
{
    // 操啊  这是我自己写的代码。泥马 现在回头都要看不懂了。
    // 这就体现了视频的重要性了有时候句句话弄清楚  自己看很费劲的。
public:
    unordered_map<int, int> mp;
    int vis[5005];
    vector<int> nums;
    string b;
    int ladderLength(string a, string b, vector<string> &c)
    {
        // if (b != c[c.size() - 1])
        //     return 0;
        // 这边题目要求了。。必须是最后一个位置。。
        // 其实这道题目有点问题。。有写地方很不严谨
        //  然后随时检查。。只要能ok 就ok
        //  然后随时检查。。只要能ok 就ok
        //  然后随时检查。。只要能ok 就okÍ
        this->b = b;
        for (int i = 26; i >= 0; --i)
        {
            int mask = 0;
            mask |= 1 << i;
            for (int j = i - 1; j >= 0; --j)
            {
                mask |= 1 << j;
                mp[mask] = 1;
                mask ^= 1 << j;
            }
        }
        // 这里是要制造有两个偏差的1 的所有情况。
        for (auto c : b)
            bb |= 1 << (c - 'a');
        for (auto c : a)
            aa |= 1 << (c - 'a');
        vector<int> res(c.size(), 0);
        // 这边题目要求目标元素必须在数组里面。
        // 也就是
        bool flag = false;
        for (int j = 0; j < c.size(); ++j)
        {
            if (b == c[j])
                flag = true;
            for (int i = 0; i < c[j].size(); ++i)
            {
                res[j] |= 1 << (c[j][i] - 'a');
            }
        }
        if (flag == false)
            return 0;
        // 这边是把c数组 转成数字化。。。
        nums = res;
        // k-1必然是目标。。也就是初始的 不里面。。然后我们就是
        dfs(0, aa, 0);
        return mint == INT_MAX ? 0 : mint;
    }
    int bb = 0, aa = 0;
    int mint = INT_MAX;
    void dfs(int count, int mk, int l)
    {
        if (mp.count(mk ^ bb))
        {
            mint = min(mint, count + 2);
            return;
        }
        if (l >= nums.size())
            return;
        // 如果都是访问过了 也会自己结束递归的~~！！！！！！！
        for (int i = 0; i < nums.size(); ++i)
        {
            if (vis[i])
                continue;
            if (!mp.count(mk ^ nums[i]))
                continue;
            //   这样只考虑往前走。。并没有考虑前面的元素接在后面的情况。
            // 这个题目真的很诡异。。但是又是系列题。
            dfs(count + 1, nums[i], l + 1);
            vis[i] = 0;
        }
    }
};
// 可以用程序 遍历。找到一个最短的 然后直接
// 底层验证出问题。。不过思路有了。。
// 这题和n皇后一样。。大框架是有的。但是就是判断是时候又问题

class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        int res = 1;
        unordered_set<string> wordSet(wordList.begin(), wordList.end());
        // 将vector转成unordered_set
        unordered_set<string> visted;
        // 已拜访
        queue<string> q;
        q.push(beginWord);
        while (q.size())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            { //每层遍历
                string word = q.front();
                q.pop();
                for (int j = 0; j < word.size(); j++)
                { //遍历单词的每个位置
                    string lWord = word;
                    for (int k = 0; k < 26; k++)
                    { //26个字母替换
                        // 这种看起来笨的不能再笨的方法。。但是在一些算法里面却经常用 而且效果
                        // 又不错。。相对于大量级。。这个反而是小的。。。很奇葩的优先级变化。
                        // 但是至少要开拓有这样的方式。。在量级非常大的情况下。。有点反直觉。
                        // 他用这样的方式 就避免了。。比较两个只差一个字符的验证问题!!!!!!!
                        // 问题转化下 就变得异常简单 。。或者直接问题就没了。
                        lWord[j] = k + 'a';
                        if (wordSet.count(lWord) && !visted.count(lWord))
                        {
                            if (lWord == endWord)
                                return res + 1;
                            q.push(lWord);
                            visted.insert(lWord);
                            // 这里公用一个vis数组。。是可以的。。
                            // 因为如果已经放在里面 说明那条路已经在走了。 你这里碰到
                            // 只不过是重新开始人家走的路而已。
                        }
                    }
                }
            }
            res++;
        }
        return 0;
    }
};
// 个人记录
// 还有一个就是这题的反向枚举的方式。。。反向枚举的思路。
// 这题碰到了好几个坑 。。 1 是题意 2 遍历方式的选择 3 验证方法 4 vis 数组是否能公用的问题

//     1题意。。这里他s1 -》sk 这个k到底是序列还是下标。。不清不楚。不严谨。 然后说endword 在sk 。。他这里要表达的应该是单词接龙最后一个。。而不是数组最后一个是endword。 然后字典里面 没有目标wordlist 也是可以直接返回0；。。 反正这里 k下标。现在回头看是直到它说的是单词接龙的下标。并不是数组的元素下标
//         但是在刚开始看这题的时候。。非常容易误会。。 这题 在弄清楚这题目要的到底是什么效果这个点上。。挺费劲的 。。
//             **其实说白了 就是给你两个数 通过这个数组去形成连续性链接。。。能否实现。。就这么简单的描述就行了。** 2 这题从最短路的这个词 很理所应当是 要选层序遍历的。 但是这里要排除掉之前选过的。。也就是不走回头路。。所以这里需要一个vis数组
//                 但是vis 数组以前做dfs的时候 其实都是私有的。**。每一条路线 自己有单独的一个vis数组 **
//                     而层序遍历。。你就很难有这样私有的一个vis。。 后来发现。。。**原来在这题上。。这个vis 不需要是私有的。。**
//                         因为比如你一个元素 已经在vis 说明这条路已经之前就已经走过。。虽然你现在又碰到这个单词，也就是这条路可以再走。。也只是重新走一遍而已。。
// 。。。弄清楚这个。。。其实就是第4点 一样。 3 这个验证方法。。 可以说是我做这题走的最大的弯路。。 如果正常思路 去想 是要去验证两个单词差一个字母。。 那么如果我们用二进制 的位数 1的多少个。来存一个字母的信息。。 就像 我们定义一个变量mask = 0,
//                                                                                                                                                                                                                         然后 mask |= 1 << (c - 'a');
// 这样把单词里面每个信息都存起来。 那么如果两个单词差一个字母。。也就是他们异或 之后 整个二进制数里面就只会剩下两个1.看起来是不是觉的这个是一个很漂亮的设计想法。 哈哈。。 但是这个想法是错的。。 因为如果只剩下两个1 我们就可以枚举所有二进制里面只有两个1 的组合成的数字。。 这个计算量不会很大。。 然后用一个哈希表存起来。。 我们验证两个单词是否符合要求 就把他们异或起来。。然后去查异或出来的数字有没有在我们的表里面就可以了。。 这个验证效率也是非常高。。。听起来也是美滋滋。。 而且我还把string 数组全部预处理成数字的形式。。这样在方便验证。。 一切准备就绪。。 哈哈哈。 但是发现这样干是不行的。 比如 miss 和mist 两个单词 用那个方式存起来 然后异或之后。。剩下的数字 里面是只有一个1的。 而不是我觉得的两个1.。。 这其实是 这种二进制存储单词。。他会遗漏一些重复的字母的信息。。**比如 miss 和missssss。。存起来都是一样的二进制数 **
//     所以 铺垫了那么久。。。不得行。。
// 。。。 然后就想去看下他们是怎么解的。。
// 。。 泥马 人家压根就不用对比。。。 他是取枚举所有变化的可能。。然后判断是不是有一样的单词。
// 。。。
//         **他做了问题转化。。**
//             把原来对比两个单词 相差一个字符。。**转化成了 **枚举一个单词所有可能的变化一次，看能不能匹配目标单词。。
// ```cpp
class Solution
{
public:
    int ladderLength(string beginWord, string endWord, vector<string> &wordList)
    {
        int res = 1;
        unordered_set<string> wordSet(wordList.begin(), wordList.end()); // 将vector转成unordered_set
        unordered_set<string> visted;                                    // 已拜访
        queue<string> q;
        q.push(beginWord);
        while (q.size())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            { //每层遍历
                string word = q.front();
                q.pop();
                for (int j = 0; j < word.size(); j++)
                { //遍历单词的每个位置
                    string lWord = word;
                    for (int k = 0; k < 26; k++)
                    { //26个字母替换
                        lWord[j] = k + 'a';
                        if (wordSet.count(lWord) && !visted.count(lWord))
                        {
                            if (lWord == endWord)
                                return res + 1;
                            q.push(lWord);
                            visted.insert(lWord);
                        }
                    }
                }
            }
            res++;
        }
        return 0;
    }
};

// ```
//
class Solution
{
public:
    int ladderLength(string a, string b, vector<string> &c)
    {
        unordered_set<string> s(c.begin(), c.end());
        unordered_set<string> vis;
        queue<string> q;
        q.push(a);
        int res = 0;
        while (q.size())
        {
            int n = q.size();
            while (n--)
            {
                string t = q.front();
                q.pop();
                for (int i = 0; i < t.size(); ++i)
                {
                    string st = t;
                    for (int j = 0; j < 26; ++j)
                    {
                        st[i] = j + 'a';
                        if (s.count(st) && !vis.count(st))
                        {
                            if (st == b)
                                return res + 1;
                            // 这个要放在里面判断。因为这个目标元素必须是要数组里有的。这也是一个很奇葩的提议
                            q.push(st);
                            vis.insert(st);
                        }
                    }
                }
            }
            res++;
            // 加n-- 这边算的才是层数。。不然每个po就算。。我去。。
        }
        return 0;
    }
};

int ladderLength(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && vis.count(s) == 0)
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        res++;
    }
    return 0;
}
// 一遍就能写出来。。
// res++的时机 要用n层。。
// s==b 要在是数组元素判断的前提下。

// 一定要自己去做下题目。。你才知道这题 难在哪里。。
// 这题对你来说 才是立体的。。有丰富细节的。。
// 这题对你来说 才是立体的。。有丰富细节的。。
// 这题对你来说 才是立体的。。有丰富细节的。。
// 直接看答案。。这题对你来说就是很平面的。。
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        res++;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        res++;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
        ;
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int i = 0; i < t.size(); ++i)
            {
                string s = t;
                for (int j = 0; j < 26; ++j)
                {
                    s[i] = j + 'a';
                    if (st.count(s) && !vis.count(s))
                    {
                        if (s == b)
                            return ++res;
                        q.push(s);
                        vis.insert(s);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
// 反向枚举。。基于26个字母可能性的枚举

int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> s(c.begin(), c.end());
    unordered_set<string> vis;
    vis.insert(a);
    queue<string> q;
    q.push(a);
    int res = 0;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string t = q.front();
            q.pop();
            for (int j = 0; j < t.size(); ++j)
            {
                string k = t;
                for (int i = 0; i < 26; ++i)
                {
                    k[j] = i + 'a';

                    if (s.count(k) && !vis.count(k))
                    {
                        if (k == b)
                            return ++res;
                        q.push(k);
                        vis.insert(k);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end());
    unordered_set<string> vis;
    vis.insert(a);
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    vis.insert(a);
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    vis.insert(a);
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    // 对于人类来说非常蠢。蠢到无法忍受的行为方式
                    //    那只是人类的认知有限 是人类错了 。。
                    // 比如三个字母的单词 这样的枚举就26*3种可能而已 。很少了。。
                    //  比如枚举到他自己。。其实不影响的。他自己在上一层就已经被枚举到了。。匹配过了
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    vis.insert(a);
    queue<string> q;
    q.push(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            q.pop();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        res++;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
int soso(string a, string b, vector<string> &c)
{
    unordered_set<string> st(c.begin(), c.end()), vis;
    queue<string> q;
    q.push(a);
    vis.insert(a);
    int res = 1;
    while (q.size())
    {
        int n = q.size();
        while (n--)
        {
            string s = q.front();
            for (int i = 0; i < s.size(); ++i)
            {
                string t = s;
                for (int j = 0; j < 26; ++j)
                {
                    t[i] = j + 'a';
                    if (st.count(t) && !vis.count(t))
                    {
                        if (t == b)
                            return ++res;
                        q.push(t);
                        vis.insert(t);
                    }
                }
            }
        }
        ++res;
    }
    return 0;
}
// 这个框架还是比较简单。就记录vis+层序遍历。
// 层序遍历+vis 还是很少见
// 吃饱了。。就不会那么冷了。。
// 欣赏冬天的冷。。省了很多事情。。因为人家都怕和你来玩。怕和你交易 躲着你。。
// 刚刚好。。
// 和妈说下 让他做好心理准备。。至少还要几个月。现在还不成熟。。
