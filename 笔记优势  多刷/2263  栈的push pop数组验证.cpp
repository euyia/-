#include <all.h>
using namespace std;
// 而且他先pop说明他pop的时候 排在他前面的push那些元素 。都还在底下。。如果那些元素的顺序pop和push中不是相反。那就不行。
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        // 主要是题意很费解。。
        // 1 可以再2前面出来。但是必须是没有放入2 的情况下。也即是第一个pop出来的是1
        // 理解了。
        stack<int> s;
        int i = 0;
        for (int p : pushed)
        {
            s.push(p);
            while (!s.empty() && s.top() == popped[i])
            {
                s.pop();
                i++;
            }
        }
        return s.empty();
    }
};
// 给出了。。push 和pop 那么他的可行性就是唯一的。
// // 所以这边就是模拟他的可行的方式。。
// 唯一的。
// 唯一的。
// 唯一的。