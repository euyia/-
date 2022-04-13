#include <all.h>
using namespace std;
class Solution
{
public:
    int maximalRectangle(vector<vector<char>> &_nums)
    {
        int n = _nums.size();
        int m = _nums[0].size();
        vector<vector<int>> nums(n, vector<int>(m));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                nums[i][j] = _nums[i][j] - '0';
                if (i >= 1 && nums[i][j])
                    nums[i][j] += nums[i - 1][j];
            }
        int maxt = 0;
        for (int i = 0; i < n; ++i)
            maxt = max(maxt, soso(nums[i]));
        return maxt;
    }
    int soso(vector<int> &nums)
    {
        int res = 0;
        vector<int> s;
        nums.insert(nums.begin(), 0);
        nums.push_back(0);
        for (int i = 0; i < nums.size(); ++i)
        {
            while (!s.empty() && nums[i] < nums[s.back()])
            {
                int cur = s.back();
                s.pop_back();
                int l = s.back();
                int r = i;
                res = max(res, (r - l - 1) * nums[cur]);
            }
            s.push_back(i);
        }
        return res;
    }
};