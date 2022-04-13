#include <all.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// 2133开始。

class Solution {
public:
 int ret = 0;
    int minMoves(int target, int maxDoubles) {
    return dfs(target, maxDoubles, 0);
    }
    int dfs( int now,int dividedTimes,int times) {
        if (now == 1) return times;

        if (dividedTimes == 0) {
            return (now - 1) + times;
        }

        if (now % 2 == 1) {
            now -= 1;
            times ++;
        }
        while (dividedTimes && (now % 2 == 0)) {
            now = now / 2;
            dividedTimes--;
            times ++;
        }
        return dfs(now, dividedTimes, times);
    }
};

// 动态规划
// 定义 vector<long long> dp 表示做到第 i 题的时候最高的得分
// 状态转移
// 选择跳过，不加此题得分，后续的题继承得分
// 选择做题，加上此题得分，跳过若干题后的下一题继承得分
// 答案为所有可能得分的最大值


class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long> dp(questions.size(), 0);
        for (int i = 0; i < dp.size(); i++) {
            int next = i + 1;
            if (next < dp.size()) {
                dp[next] = max(dp[next], dp[i]);
            }

            next = i + questions[i][1] + 1;
            dp[i] += questions[i][0];
            if (next < dp.size()) {
                dp[next] = max(dp[next], dp[i]);
            }
        }
        auto ans = *max_element(dp.begin(), dp.end());
        return ans;
    }
};


class Solution {
public:
    long long maxRunTime(int n, vector<int>& batteries) {
        auto check = [&](long long t) {
            long long sum = 0;
            for(int i : batteries) sum += min(t, (long long)i);
            return sum / t >= n;
        };
        
        long long l = 1, r = 1e16;
        while(l < r) {
            long long m = (l + r) / 2;
            if(check(m)) {
                l = m + 1;
            }
            else {
                r = m;
            }
        }
        return l - 1;
    }
};

