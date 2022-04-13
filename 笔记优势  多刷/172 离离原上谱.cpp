#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
class Solution
{
public:
    int trailingZeroes(int n)
    {
        int cnt = 0;
        while (n > 0)
        {
            cnt += n / 5;
            n /= 5;
        }
        return cnt;
    }
};

// 分析
// 1 比如5 他有一个零。那么50的阶层 就有两个0.。也就是乘以10 就多一个0
// 2 10 只有可能由2 和5 来出现。
// 3  5出现的评率 比3高。。所以只要有5出现就能配对。。所以只需要统计5个数
// 4 发现第 25个5 125个5 625个5 都会多出一个5.。
// 。。然后就有上面的写法了。