#include <all.h>
using namespace std;
// 刷变强才是培养自信正道。
// 而不是去做简单题。
// 去刷难的。让难题对你来说变简单。。但是对别人来说还是难的。
// 这才有意义
// 输入：obstacles = [0,2,1,0,3,0]
// 输出：2
// 解释：最优方案如上图所示。总共有 2 次侧跳。。
// other 和another
// 他这里的找其他两个位置的方式 很nice

class Solution
{
public:
    int minSideJumps(vector<int> &obstacles)
    {
        int n = obstacles.size();
        int num = 2;
        int res = 0;
        for (int i = 0; i < n - 1;)
        {
            //若当前跑道无障碍一直前进
            if (obstacles[i + 1] != num)
            {
                i++;
                continue;
            }
            //other和another为另外两条跑道编号
            int other = (num + 1) % 3, another = (num + 2) % 3;
            other = (other == 0) ? 3 : other;
            another = (another == 0) ? 3 : another;
            int t = i;
            //计算测跳道other号跑道时遇到的第一个障碍位置
            while (t < n && obstacles[t] != other)
            {
                t++;
            }
            //计算测跳道another号跑道时遇到的第一个障碍位置
            while (i < n && obstacles[i] != another)
            {
                i++;
            }
            //选择靠后的那条跑道，更新当前跑道序号和当前位置。
            if (t > i)
            {
                num = other;
            }
            else
            {
                num = another;
            }
            i = max(t, i) - 1;
            res++;
        }
        return res;
    }
};
// 我是觉得这个i-1位置的时候会影响跳跃的步数。
// 而不是固定的res++;
// 有时候要绕着跳。。
// 而且他这个贪心的思路。。是碰到下一个同位置的石头 最远的 。。
// 这两点 都不是很靠谱。。