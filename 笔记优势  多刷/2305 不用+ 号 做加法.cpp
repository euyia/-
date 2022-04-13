#include <all.h>
using namespace std;
// 不进位和==位异或
// 如果a、b两个值不相同，则异或结果为1。如果a、b两个值相同，异或结果为0。
// 是否进位==按位与
class Solution
{
public:
    int add(int a, int b)
    {
        // 寻找答案 用位运算符？？？用数据结构？
        if (b == 0)
            return a;
        return add(a ^ b, (unsigned int)(a & b) << 1);
    }
};
//  还有一题不用除号做除法的
// 有dp的思想在里面
// 2306