#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
// 多学习好的解题方法。。然后多把时间花在这个上面。这才是学习。。
// 研究也是需要的。。但是目前更多的应该是模仿。。才是。。
// 时间占比大的应该放在模仿上。。。直接形成正确的动作习惯。。这才是聪明的 不造轮子。
// 目前。。但是只是目前。。造轮子是早晚的。。因为造轮子的人才是有灵魂的。
class Solution
{
public:
    vector<vector<string>> res;
    unordered_set<string> vis;
    vector<vector<string>> findLadders(string a, string b, vector<string> &c)
    {
        unordered_set<string> st(c.begin(), c.end());
        // 深度递归的方式 优选。。
        queue<vector<string>> q;
        q.push({a});
        //    队列直接存list 答案。
        while (q.size())
        {
            if (res.size())
                return res;
            int n = q.size();
            while (n--)
            {
                auto tmp = q.front();
                // 这个这么设计啊。。。
                q.pop();
                for (int i = 0; i < tmp.back().size(); ++i)
                {
                    string t = tmp.back();
                    for (int j = 0; j < 26; ++j)
                    {
                        t[i] = j + 'a';
                        if (st.count(t) && !vis.count(t))
                        {
                            auto k = tmp;
                            k.push_back(t);
                            if (t == b)
                            {
                                res.push_back(k);
                            }
                            q.push(k);
                            vis.insert(t);
                        }
                    }
                }
            }
        }
        return res;
    }
};
// q队列变成存一个vector里面放的是顺序。。不知道为什么 出来的答案只有一个。。
// 感觉不需要在重新dfs啊。
// 反正就是觉得很怪。。
// 就是不愿用他们那个建图。因为建图其实不难。。我就是嫌麻烦而已
// 一堆人抱怨这题难。。这题应该要放在127的后面的。。他这题目的顺序也是有点怪。
// 这题也是卡主了。。那个地下城那题也是还没处理好。