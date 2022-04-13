#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int strStr(string a, string b)
    {
        const int max = 50005;
        int m = a.size();
        int n = b.size();
        int next[max] = {0};
        int i = 0;
        int j = -1;
        next[0] = -1;
        while (i < n - 1)
        {
            if (j == -1 || b[i] == b[j])
            {
                i++;
                j++;
                next[i] = j;
            }
            else
            {
                j = next[j];
            }
        }
        int p = 0, q = 0;
        while (p < m && q < n)
        {
            if (q == -1 || a[p] == b[q])
            {
                p++;
                q++;
            }
            else
            {
                q = next[q];
            }
        }
        if (q == n)
            return p - q;
        else
            return -1;
    }
};
int soso(string a, string b)
{
    int m = a.size();
    int n = b.size();
    vector<int> match(n);
    match[0] = -1;
    int r = 0;
    int l = -1;
    while (r < n - 1)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < m && q < n)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(n);
    match[0] = -1;
    int l = -1, r = 0;
    while (r < n - 1)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int up = 0, down = 0;
    while (up < n && down < m)
    {
        if (down == -1 || a[up] == b[down])
        {
            ++up;
            ++down;
        }
        else
            down = match[down];
    }
    if (down == m)
        return up - down;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m);
    match[0] = -1;
    int l = -1, r = 0;
    while (r < m - 1)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++p;
            ++q;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m - 1)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            q++;
            ++q;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m - 1)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (q < m && p < n)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[l] == b[r])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            q++;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 && a[p] == a[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[l];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[r] == b[l])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (p < n && q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> match(m, -1);
    int l = -1, r = 0;
    while (r < m)
    {
        if (l == -1 || b[l] == b[r])
            match[++r] = ++l;
        else
            l = match[l];
    }
    int p = 0, q = 0;
    while (q < m)
    {
        if (q == -1 || a[p] == b[q])
        {
            ++q;
            ++p;
        }
        else
            q = match[q];
    }
    if (q == m)
        return p - q;
    else
        return -1;
}
int soso(string a,string b)
{
    int n=a.size();
    int m=b.size();
    vector<int>match(m,-1);
    int l=-1,r=0;
    while(r<m)
    {
        if(l==-1||b[r]==b[l])
        match[++r]=++l;
        else
        l=match[l];
    }
    int p=0,q=0;
    while(p<n&&q<m)
    {
        if(q==-1||a[p]==b[q])
        {
            ++q;
            ++p;
        }else
        q=match[q];
    }
    if(q==m)
    return p-q;
    else
    return -1;
}
int soso(string a,string b)
{
    
}