#include <all.h>
using namespace std;
// 你已被移出这个世界。
class Solution
{
public:
    string intToRoman(int num)
    {
        // 把阿拉伯数字与罗马数字可能出现的所有情况和对应关系，放在两个数组中，并且按照阿拉伯数字的大小降序排列
        int nums[]{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string s;
        int index = 0;
        while (index < 13)
        {
            // 特别注意：这里是等号
            while (num >= nums[index])
            {
                s += romans[index];
                num -= nums[index];
            }
            index++;
        }
        return s;
    }
};
// 这题主要两点 1是搞这些数据。。2就是贪心。
// 能不能用贪心是要看给的数组数据的。
// 比如11 5 1 面值 拼成15面值。就不能用贪心 11 +5个1
// 就是3个5了。。。这个题解区一个牛人的发现。
