#include <all.h>
using namespace std;
// 发现哈希表的另外一个有点
// 就是不用重置0.。默认就是0.只要你硬去查他。他就会给你初始化

class Solution
{
public:
    int lenLongestFibSubseq(vector<int> &arr)
    {
        unordered_map<int, int> hash, index;
        int ans = 0, n = arr.size();
        for (int i = 0; i < n; ++i)
        {
            index[arr[i]] = i;
        }
        for (int i = 0; i < n; ++i)
        {
            int a = arr[i];
            for (int j = i - 1; j > 0; --j)
            {
                int b = arr[j];
                int c = a - b;
                // c, b, a
                // k, j, i
                if (c >= b)
                    break;
                // 这里直接break》》？？？？？？？
                if (index.count(c))
                {
                    int k = index[c];
                    hash[j * n + i] = hash[k * n + j] + 1;
                    // 只要能查的到。就默认k是会带来更大的值。
                    // 这里是懒没有用二维数组。用的是扁平化的二维数组。。
                    // i j 取值还是一样取。然后这边放。。会对应的位置不会乱。。就能保证如此。
                    ans = max(ans, hash[j * n + i] + 2);
                }
            }
        }
        return ans >= 3 ? ans : 0;
    }
};

class Solution
{
public:
    int lenLongestFibSubseq(vector<int> &a)
    {
        unordered_map<int, int> mp;
        int n = a.size();
        for (int i = 0; i < n; ++i)
            mp[a[i]] = i;
        int dp[n][n];
        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
                dp[i][j] = 2;
        int maxt = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i + 1; j < n; ++j)
            {
                int cur = a[j] - a[i];
                if (mp.count(cur))
                {
                    int idx = mp[cur];
                    if (idx < i)
                        dp[i][j] = max(dp[i][j], dp[idx][i] + 1);
                }
                maxt = max(dp[i][j], maxt);
            }
        return maxt > 2 ? maxt : 0;
    }
};

// 下面是正常的二维
// 但是速度差了很多。。