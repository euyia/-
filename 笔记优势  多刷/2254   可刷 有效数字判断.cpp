#include <all.h>
using namespace std;
// 这题应该是这种题型的巅峰了。。
// 别看好像很简约。。他这边封装了好几个辅助函数。
class Solution
{
public:
    int i = 0;
    //扫描空格
    void getSpace(string &s)
    {
        while (i < s.size() && s[i] == ' ')
            i++;
    }
    //扫描有符号整数
    bool getInt(string &s)
    {
        if (i < s.size() && (s[i] == '+' || s[i] == '-'))
            i++;
        return getUint(s);
    }
    //扫描无符号整数
    bool getUint(string &s)
    {
        int tmp = i;
        while (i < s.size() && isdigit(s[i]))
            i++;
        return i > tmp;
    }
    bool isNumber(string s)
    {
        if (s == "")
            return false;
        getSpace(s);
        bool flag = getInt(s);
        if (i < s.size() && s[i] == '.')
        {
            i++;
            //当为.时,后面必须是无符号整数，并且.的前后只要有一个为true就行
            //而且必须把getUint(s)放在前面，不然由于||的短视特征，小数点后面可能不会被扫描到
            flag = getUint(s) || flag;
        }
        if (i < s.size() && (s[i] == 'e' || s[i] == 'E'))
        {
            i++;
            flag = flag && getInt(s); //e的前后都必须为true
        }
        getSpace(s);
        return i == s.size() && flag;
    }
};

class Solution
{
public:
    bool isNumber(string s)
    {
        int i, dot_tag = 0;
        while (s[i] == ' ')
        {
            i++;
        } //判断空格
        if (s[i] == '+' || s[i] == '-')
        {
            i++;
        }; //判断正负号
        if (s[i] == '.')
        {
            dot_tag++;
            i++;
        } //判断小数点
        if (s[i] > '9' || s[i] < '0')
            return false; //没有数字直接出字母 直接false
        while (s[i] <= '9' && s[i] >= '0')
            i++;
        if (s[i] == '.')
        {
            if (dot_tag != 0)
                return false;
            else
            {
                i++;
                while (s[i] <= '9' && s[i] >= '0')
                    i++;
            }
        } // 数字后面接点的情况
        if (s[i] == 'e' || s[i] == 'E')
        {
            i++;
            if (s[i] == '+' || s[i] == '-')
            {
                i++;
            }
            if (s[i] > '9' || s[i] < '0')
                return false;
            while (s[i] <= '9' && s[i] >= '0')
                i++;
        } //出现e或者E的情况
        while (s[i] == ' ')
        {
            i++;
        } //后空格
        if (s[i] == '\0')
            return true;
        else
            return false;
    }
};
// 这种题 闲着的时候可以刷刷吧。。
// 感受其中的组织代码的逻辑。。
