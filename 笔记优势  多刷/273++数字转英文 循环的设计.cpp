#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
class Solution
{
public:
    string numberToWords(int k)
    {
        string a[10]{"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
        string d[10]{"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eghteen ", "Nineteen "};
        string b[]{"Billion", "Million", "Thousand", "Hundred"};
        string c[]{"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        // billion;
        string s;
        int n = 6;
        if (k == 0)
            return a[0];

        int cur = pow(10, 10);
        if (k > cur)
        {
            int l = k / cur;
            s += a[l] + b[0];
            k -= l * cur;
        }
        cur = pow(10, 9);
        if (k >= cur)
        {
            int l = k / cur;
            s += c[l] + b[3];
            k -= l * cur;
            // 不好弄 他会涉及到如果十位和各位都为零。
        }
        cur = pow(10, 8);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += c[l];
            // 这边要怎么处理
            k %= cur;
        }
        cur = pow(10, 7);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += a[l] + b[1];
            else
                s += b[1];
            k %= cur;
        }
        cur = pow(10, 6);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += a[l] + b[3];
            k %= cur;
        }
        cur = pow(10, 5);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += c[l];
            k %= cur;
        }
        cur = pow(10, 4);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += a[l] + b[2];
            else
                s += b[2];
            k %= cur;
        }
        cur = pow(10, 3);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += a[l] + b[3];

            k %= cur;
        }
        cur = pow(10, 2);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += c[l];

            k %= cur;
        }
        cur = pow(10, 1);
        if (k > cur || s.size())
        {
            int l = k / cur;
            if (l)
                s += a[l];
            k %= cur;
        }
        return s;
    }
};

class Solution
{
public:
    string numberToWords(int k)
    {
        string a[10]{"Zero", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
        string b[]{"Billion ", "Million ", "Thousand ", "Hundred "};
        string c[]{"", "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
        string d[10]{"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
        // billion;
        string s;
        int n = 6;
        if (k == 0)
            return a[0];
        int l = INT_MIN, r = INT_MIN;
        long cur = pow(10, 9);
        if (k >= cur)
        {
            l = k / cur;
            s += a[l] + b[0];
            k %= cur;
        }
        // cur = pow(10, 9);
        // if (k >= cur)
        // {
        //     int l = k / cur;
        //     s += c[l] + b[3];
        //     k %= cur;
        //     // 不好弄 他会涉及到如果十位和各位都为零。
        // }
        cur = pow(10, 8);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l)
                s += a[l] + b[3];
            k %= cur;
        }
        cur = pow(10, 7);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l == 1)
            {
                r = k * 10 / cur;
                s += d[r - 10];
                cur /= 10;
                k %= cur;
                r = INT_MIN;
                //    这个如果这边给人处理了。
            }
            else if (l)
                s += c[l];
            // s += a[l] + b[1];
            // else
            //     s += b[1];
            k %= cur;
        }
        cur = pow(10, 6);
        if (k >= cur || s.size())
        {

            l = k / cur;
            if (l)
                s += a[l] + b[1];
            k %= cur;
        }
        cur = pow(10, 5);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l)
                s += a[l] + b[3];
            k %= cur;
        }
        cur = pow(10, 4);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l == 1)
            {
                r = k * 10 / cur;
                s += d[r - 10];
                cur /= 10;
                k %= cur;
                r = INT_MIN;
                //    这个如果这边给人处理了。
                // 这边的0的个数问题。。。？？？？
            }
            else if (l)
                s += c[l];

            k %= cur;
        }
        cur = pow(10, 3);
        if (k >= cur || s.size())
        {

            l = k / cur;
            if (l)
                s += a[l] + b[2];
            else if (s.size() < 8 || s.substr(s.size() - 8, s.size()) != "Million ")
                // 这样子补。。补不完的 。。。虽然已经从很巧妙的角度来补了。。
                // 但是底部是错的。。外面怎么补都是折腾效果又差。。
                // 这个应该是让k%cur 然后如果k==0 就直接return
                // 这样补太累了。。太累了。。。补了两个小时了。够意思了吧。。我看答案去了。。
                // 这边主要是基础部分的循环设计感觉有问题。
                s += b[2];

            k %= cur;
        }
        cur = pow(10, 2);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l)
                s += a[l] + b[3];

            k %= cur;
        }
        cur = pow(10, 1);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l == 1)
            {
                r = k * 10 / cur;
                s += d[r - 10];
                cur /= 10;
                k %= cur;
                //    这个如果这边给人处理了。
            }
            else if (l)
                s += c[l];
            k %= cur;
        }

        cur = pow(10, 0);
        if (k >= cur || s.size())
        {
            l = k / cur;
            if (l)
                s += a[l];
            k %= cur;
        }
        s.pop_back();
        return s;
    }
};

class Solution
{
public:
    // vector<string> singles = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    // vector<string> teens = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    // vector<string> tens = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    // vector<string> thousands = {"", "Thousand", "Million", "Billion"};
    string singles[10]{"Zero", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
    string thousands[10]{"", "Thousand ", "Million ", "Billion "};
    string tens[10]{"", "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
    string teens[10]{"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
    //   这边把每个字符串后面加空格。可以省略代码上很多细节，可以全部选取引号来直接一次性添加。而且主要是这样代码更加简洁。
    string numberToWords(int num)
    {
        if (num == 0)
        {
            return "Zero";
        }
        string s;
        for (int i = 3, unit = 1000000000; i >= 0; i--, unit /= 1000)
        {
            // 这里最大的巧妙的点 他是1000 一段的取。。我是10一段的取。
            // 然后因为数据是大的放在映射表数组后面 所以这里i是反向顺序取。。
            int curNum = num / unit;
            // 这边如果三个位置 都是0 就不会进入循环 也就规避了 后面空加一个单位的问题
            //   这个问题 对于1个位置一个位置处理的。。是解决不了的。
            // 信息广度不足以拿到判断条件。
            if (curNum != 0)
            {
                num %= unit;
                // num -= curNum * unit; 很上面是等价的 验证了
                s += toEnglish(curNum) + thousands[i];
            }
        }
        s.pop_back();

        return s;
    }

    string toEnglish(int num)
    {
        // 这样细分 直接在三个数字里面细化处理 就非常舒服 简洁
        string curr;
        int hundred = num / 100;
        num %= 100;
        if (hundred != 0)
        {
            curr += singles[hundred] + "Hundred ";
        }
        int ten = num / 10;
        // 他这里把10的和个位数的合并起来处理了。
        // 也就是把20以下的都当做一个独立的数字来处理。。确实。。是更加合理的。
        // 对于英文来说 20以下的数字 没有一个是组合的。
        if (ten >= 2)
        {
            curr += tens[ten];
            num %= 10;
            // 也就是对100以内的做分流。20以上的进入这个再处理。
            // 区别 只是多一个工序。最后也是到下面
            // 20以下的直接到下面处理。
        }

        if (num > 0 && num < 10)
        {
            // 这个就是小于10的。
            curr += singles[num];
        }
        else if (num >= 10)
        {
            curr += teens[num - 10];
            // 这个就是10-20的那些数
        }
        return curr;
    }
};

string a[10]{"Zero", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
string b[10]{"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
string c[10]{"", "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
string d[10]{"", "Thousand ", "Million ", "Billion "};
// 这边的命名顺序也是有内在逻辑的。。
// 就是从小细节数字 到大范围的数字。
class Solution
{
public:
    string numberToWords(int k)
    {
        string t;
        for (int i = 3, j = 1000000000; j >= 0; i--, j /= 1000)
        {
            int l = k % j;
            if (l != 0)
            {
                k %= j;
                t += toenglish(l) + d[i];
            }
        }
        return t;
    }
    string toenglish(int k)
    {
        string s;
        int hud = k / 100;
        int r = k % 100;
        if (hud != 0)
        {
            s += a[hud] + "Hundred ";
        }
        int l = r / 10;
        if (l > 2)
        {
            s += c[l];
            r %= 10;
        }
        if (r > 0 && r < 10)
            s += a[r];
        else
            s += b[r - 10];
        return s;
    }
};

class Solution
{

    string a[10]{"Zero", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ", "Nine "};
    string b[10]{"Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ", "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen "};
    string c[10]{"", "Ten ", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninety "};
    string d[10]{"", "Thousand ", "Million ", "Billion "};

public:
    string numberToWords(int num)
    {
        if (num == 0)
            return a[0];
        string t;
        for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
        // 这边的j 就是三个0 一组记。。。
        {
            int l = num / j;
            if (l != 0)
            {
                num %= j;
                t += helper(l) + d[i];
            }
        }
        t.pop_back();
        return t;
    }
    string helper(int l)
    {
        // l才是主线。。。其他的都是辅助变量。。你要做处理都是对l进行的。
        string t;
        int h = l / 100;
        l %= 100;
        if (h != 0)
            t += a[h] + "Hundred ";
        int left = l / 10;
        if (left >= 2)
        {
            t += c[left];
            l %= 10;
            // 这边是对l进行处理 不是left
        }
        if (l >= 10)
            t += b[l - 10];
        else if (l != 0)
            t += a[l];
        // 这边没有写 else if l!=0。。。是错的。。
        return t;
    }
};
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l != 0)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h != 0)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l != 0)
        s += a[l];
    return s;
}
string soso(int l)
{
    string t;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int c = l / j;
        if (c != 0)
        {
            l %= j;
            t += dfs(c) + d[i];
        }
    }
    t.pop_back();
    return t;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h != 0)
    {
        s += a[h] + "Hundred ";
    }
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l != 0)
        s += a[l];
    return s;
}
string soso(int k)
{
    string t;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            t += dfs(l) + d[i];
        }
    }
    t.pop_back();
    return t;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l % 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; i--, j /= 1000)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}

string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
// 精刷困难题。。收获大大的。
string soso(int k)
{
    string s;
    for (int i = 0, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 0, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int k)
{
    string s;
    int h = k / 100;
    k %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = k / 10;
    if (left >= 20)
    {
        s += c[left];
        k %= 10;
    }
    if (k >= 10)
        s += b[k - 10];
    else if (k)
        s += a[k];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 0, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; i--, j /= 1000)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[j];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        l %= 10;
        s += c[left];
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            k %= j;
            s += dfs(l) + d[i];
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 10)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
        // 就是什么声音都不想听到  可能是心太累了吧。。。
        // 不会影响到别人。。但是有点自己听腻了。。
        // 没想到这题 我自己刷了这么多次。。
        // 感觉是好题啊  。。。很多人说这道题很垃圾。。但是我觉得很棒。。
        //  这种设计结构 非常稳定。而且实用。
        {
            s += dfs(l) + d[i];
            k %= j;
        }
    }
    s.pop_back();
    // 而且发现pop的打法 就和他的意思很一致 。他是p 之后 o 就回退的样子 和他的意思不谋而合
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 20)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 100000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        // 这个是取前三位
        if (l)
            s += dfs(l) + d[i];
        k %= j;
        // 这个是取扣去前三位剩下的。
    }
    s.pop_back();
    return s;
}
// 这个循环虽然看起来简单。。
// 但是其实有三条迭代的路线。
// 所以刚开始并不是很好理解
//  一天是j i 另外一条是k 。。
// j迭代是1000 一次 i是每次换一个格子。。j的迭代是每次取三个位置 所以1000的迭代方式
// 然后k的迭代 也是每次三位的缩减。。
// 然后还有个l 其实和j  分割成两端
// k/j 就是l 也即是k的前三位
// 然后k%j 就是取k去目前的三位剩下的位数。。
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 100000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 100000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
// 一万行。。。分作几天就有了 。。没啥。以前想都不敢想的 。
// 就是要把所有的精力和时间 全压在刷上。。这就对了。
// 题量无所谓的 。
// 在这种有效的地方 虽然看不见的。。但是我愿意用力。。
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i];
        k %= j;
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
// 主线迭代 还是一个数
// 取出他的第一位。然后做分析
// 然后用% 取到他剩下的
// 继续做后序处理。。。。这就是主线。。
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    // 这里也是取他的第一位处理
    // 就是left 然后进行分析。。
    // 就是这样逐层剥落的。。。
    // 就是这样逐层剥落的。。。
    // 就是这样逐层剥落的。。。
    // 只不过这里10位的比较特殊。。他把10-20的直接和个位数当做同一个段位的。。
    // 也就是10-20 和1-10 是同级的。。他们都是由单独的单词组合而成的。
    // 也就是10-20 和1-10 是同级的。。他们都是由单独的单词组合而成的。
    // 也就是10-20 和1-10 是同级的。。他们都是由单独的单词组合而成的。

    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
// 这样他的纹理就出来了。 就很好记了。。。这是刷多了 才能理解了 。自己总结出来的。
string soso(int t)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = t / j;
        if (l)
            s += dfs(l) + d[i];
        t %= j;
    }
    s.pop_back();
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l > 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
// 提升解决问题的能力。

string dfs(int l)
{
    string s;
    int h = l / 100;
    l %= 100;
    if (h)
        s += a[h] + "Hundred ";
    int left = l / 10;
    if (left >= 2)
    {
        s += c[left];
        l %= 10;
    }
    if (l >= 10)
        s += b[l - 10];
    else if (l)
        s += a[l];
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i],
                k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i],
                k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 100000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 100000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 100000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 10000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
string soso(int k)
{
    string s;
    for (int i = 3, j = 1000000000000; j > 0; j /= 1000, i--)
    {
        int l = k / j;
        if (l)
            s += dfs(l) + d[i], k %= j;
    }
    s.pop_back();
    return s;
}
// j 是三位一次的枚举迭代，i是反向迭代，然后l是%取余的方式往后面迭代。。
// 这三个变量的行走方式的都是很特别的。
// 虽然这题好像就是那么几行。。但是很精彩。。
// 觉得无聊的时候。想法是很不对的。。
// 你要么去学习。提升战斗力。要么去睡觉恢复。要么去娱乐。。无聊什么鬼。。享受人生啊。
// 虽然现在没有钱。但是快乐有很多种。。而且很多高级的快乐是和钱无关的。。
// 我们就要通过学习去获取这样的快乐。
// 学习是非常耗费时间的 。你看到那座山 相对容易。但是爬上去可能要一生。
// 所以没时间给你无聊的。。
// 你要熟悉这些这个小的模板。你10000行到了吗。你一万行都要多少时间了 。