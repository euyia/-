#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 外界有太多很坑的声音。。
class Solution
{
public:
    int bestRotation(vector<int> &nums)
    {
        int n = nums.size();
        int k = 0;
        int cnt = 0;
        int maxt = 0;
        while (k < n)
        {
            int cur = 0;
            for (int i = 0; i < n; ++i)
            {
                cur += nums[(i + k) % n] <= i;
            }
            if (cur > maxt)
            {
                maxt = cur;
                cnt = k;
            }
        }
        return cnt;
    }
};

class Solution
{
public:
    int bestRotation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> diff(n);
        for (int i = 0; i < n; ++i)
        {
            diff[(i + 1) % n]++;
            diff[(n + i - nums[i] + 1) % n]--;
        }
        int score = 0, large = INT_MIN, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            score += diff[i];
            if (score > large)
            {
                ans = i;
                large = score;
            }
        }
        return ans;
    }
};

// 差分数组。
class Solution
{
public:
    int bestRotation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> kmin(n), kmax(n);
        vector<int> cnt(n + 1);
        //kmin、kmax分别代表能使nums[i]得分的k的左右界
        for (int i = 0; i < n; ++i)
        {
            kmin[i] = (i + 1) % n;
            kmax[i] = (n + i - nums[i]) % n;
        }
        //用cnt[i]记录k为i时的变化情况，即所谓的差分数组
        for (int i = 0; i < n; ++i)
        {
            cnt[kmin[i]]++;
            cnt[(kmax[i] + 1) % n]--;
        }
        //遍历差分数组，得到k==i时的分数大小（这里的score相当于真实分数减去k为0时的分数）
        int score = 0, score_max = INT_MIN, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            score += cnt[i];
            if (score > score_max)
            {
                ans = i;
                score_max = score;
            }
        }
        return ans;
    }
};
