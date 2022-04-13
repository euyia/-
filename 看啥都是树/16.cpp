#include <vector>
using namespace std;
class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int t = target;
        int n = nums.size();
        int res = INT_MAX;
        int ret;
        for (int i = 0; i < n; ++i)
        {
            int l = i, r = l + 1, z = n - 1;
            while (r < z)
            {
                int k = nums[l] + nums[r] + nums[z];
                if (abs(t - k) < res)
                {
                    res = abs(t - k);
                    ret = k;
                }
                if (k > t)
                    z--;
                else if (k < t)
                    r++;
                else
                    return ret;
            }
        }
        return ret;
    }
};