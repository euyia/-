#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>

// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
struct BigInt
{
    const static int mod = 10000;
    const static int DLEN = 4;
    int a[600], len;
    BigInt()
    {
        memset(a, 0, sizeof(a));
        len = 1;
    }
    BigInt(int v)
    {
        memset(a, 0, sizeof(a));
        len = 0;
        do
        {
            a[len++] = v % mod;
            v /= mod;
        } while (v);
    }

    BigInt(const char s[])
    {
        memset(a, 0, sizeof(a));
        int L = strlen(s);
        len = L / DLEN;
        if (L % DLEN)
            len++;
        int index = 0;
        for (int i = L−1; i >= 0; i−= DLEN)
        {
            int t = 0;
            int k = i−DLEN + 1;
            if (k < 0)
                k = 0;
            for (int j = k; j <= i; j++)
                t = t * 10 + s[j] − '0';
            a[index++] = t;
        }
    }

    BigInt operator+(const BigInt &b) const
    {
        BigInt res;
        res.len = max(len, b.len);
        for (int i = 0; i <= res.len; i++)
            res.a[i] = 0;
        for (int i = 0; i < res.len; i++)
        {
            res.a[i] += ((i < len) ? a[i] : 0) + ((i < b.len) ? b.a[i] : 0);
            res.a[i + 1] += res.a[i] / mod;
            res.a[i] %= mod;
        }
        if (res.a[res.len] > 0)
            res.len++;
        return res;
    }
    BigInt operator*(const BigInt &b) const
    {
        BigInt res;
        for (int i = 0; i < len; i++)
        {
            int up = 0;
            for (int j = 0; j < b.len; j++)
            {
                int temp = a[i] * b.a[j] + res.a[i + j] + up;
                res.a[i + j] = temp % mod;
                up = temp / mod;
            }
            if (up != 0)
                res.a[i + b.len] = up;
        }
        res.len = len + b.len;
        while (res.a[res.len − 1] == 0 && res.len > 1)
            res.len−−;
        return res;
    }
    void output()
    {
        // printf("%d", a[len−1]);
        for (int i = len−2; i >= 0; i−−)
            printf("%04d", a[i]);
        printf("\n");
    }
};
int main()
{
    string l, r;
    cin >> l >> r;
    BigInt a = BigInt(l);
    BigInt b = BigInt(r);
    a = a + b;
    a.output();
}
// char s[] 应该就是string  s
// 这里主要是直接全封装起来了。。长见识了。。
// 这硬通货啊。。。
// 太硬了这个。。

// 不知道为啥 不能直接用 有很多错误。。？？？回头看下吧 。。
// 如果能直接套用。。那简直不要太爽。
// 但是不知道哪里细节错了。