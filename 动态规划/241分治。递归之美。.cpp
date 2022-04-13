#include <all.h>
using namespace std;
// 括号数量是字符数减二，
//     再任何位置用回溯去匹配所有可能得括号位置，就是那三条
//     1做边小于二分之一可以一直加，
//     2右边括号小于左边括号可以右边括号递归，，但是如果括号到只有符号？？？
//     3如果括号数等于的时候终止。。然后转成数字
//     思路就这样了，可能还有些细节，就是比如（+）这样的。。。这种就是要剪枝？？还是这种模拟不行？？？

// 上面是做题时候自己的分析。。
// 。。可以见得跑偏的有多厉害。
// 还是分治。。。但是跑偏其实也有例子的功劳。。
// 输入：expression = "2*3-4*5"
// 输出：[-34,-14,-10,-10,10]
// 解释：
// (2*(3-(4*5))) = -34
// ((2*3)-(4*5)) = -14
// ((2*(3-4))*5) = -10
// (2*((3-4)*5)) = -10
// (((2*3)-4)*5) = 10

// 这例子就疯狂模拟。。。我擦。。疯狂努力带偏。。。真的是。。
class Solution
{
public:
    vector<int> diffWaysToCompute(string s)
    {
        // if (s.size() == 0)
        //     return {};
        vector<int> res;
        for (int i = 0; i < s.size(); ++i)
        {
            if (!isop(s[i]))
                continue;
            vector<int> left = diffWaysToCompute(s.substr(0, i));
            vector<int> right = diffWaysToCompute(s.substr(i + 1, s.size() - i - 1));
            // 这个越界问题。等下在处理。
            for (auto l : left)
                for (auto r : right)
                {
                    if (s[i] == '+')
                        res.push_back(l + r);
                    else if (s[i] == '-')
                        res.push_back(l - r);
                    else if (s[i] == '*')
                        res.push_back(l * r);
                    else
                        res.push_back(l / r);
                }
        }
        if (res.size() == 0)
            res.push_back(stoi(s));
        return res;
    }
    bool isop(char c)
    {
        return c == '+' || c == '-' || c == '/' || c == '*';
    }
};