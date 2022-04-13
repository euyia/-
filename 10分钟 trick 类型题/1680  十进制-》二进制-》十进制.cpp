#include <all.h>
using namespace std;
// 输入：n = 12
// 输出：505379714
// 解释：连接结果为 "1101110010111011110001001101010111100" 。
// 对应的十进制数字为 118505380540 。
// 对 109 + 7 取余后，结果为 505379714 。
// 连续数字转二进制。然后再转回十进制。
class Solution
{
public:
    int concatenatedBinary(int n)
    {
        int MOD = 1000000000 + 7;
        long ans = 0; //long避免溢出
        int bit = 0;  //需要移动的位数
        for (int i = 1; i <= n; ++i)
        {
            //当i是2的n次方时，i & (i - 1) == 0 如： i = 4, 二进制i为100, i - 1 = 011， i & (i - 1) == 0
            if ((i & (i - 1)) == 0)
            {
                ++bit;
            }
            ans = ((ans << bit) + i) % MOD;
        }
        return (int)ans;
    }
}