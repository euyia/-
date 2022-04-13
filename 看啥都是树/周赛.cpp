#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
#define N 1005
class Solution
{
private:
    int n, lower[N]{}, higher[N]{};
    vector<int> res;

public:
    bool check(vector<int> &nums, int k)
    {
        int l = 0, r = 1;

        for (; r < n; ++r)
        {
            if (nums[l] + 2 * k == nums[r])
            {
                nums[r] *= -1;
                l++;
            }
            if (nums[l] < 0)
            {
                l++;
            }
        }
        for (int i = 0; i < n; ++i)
            if (nums[i] < 0)
                nums[i] *= -1;
        return l == n;
    }
    void get(vector<int> &nums, int k)
    {
        int l = 0;
        for (; l < n; ++l)
        {
            if (nums[l] > 0)
            {
                res.push_back(nums[l] + 2 * k);
                int k = nums[l] + k;
                k *= -1;
            }
        }
    }
    vector<int> recoverArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            int k = nums[i] - nums[0];
            if (k % 2 == 1)
                break;
            else
            {
                if (check(nums, k / 2))
                {
                    get(nums, k / 2);
                    break;
                }
            }
        }
        return res;
    }
};
#define N 1005
class Solution
{
private:
    int n;
    vector<int> res;

public:
    bool check(vector<int> &nums, int k)
    {
        int l = 0, r = 1;
        for (; r < n; ++r)
        {
            if (nums[l] + k == nums[r])
            {
                nums[r] *= -1;
                l++;
            }
            if (nums[l] < 0)
                l++;
        }
        for (int i = 0; i < n; ++i)
            if (nums[i] < 0)
                nums[i] *= -1;
        return l == n;
    }
    void get(vector<int> &nums, int k)
    {
        int l = 0, r = 1;
        for (; r < n; ++r)
        {
            if (nums[l] > 0 && (nums[l] + k == nums[r]))
            {
                res.push_back(nums[l] + k / 2);
                nums[r] *= -1;
                l++;
            }
            else if (nums[l] < 0)
                l++;
        }
    }
    vector<int> recoverArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        n = nums.size();
        for (int i = 1; i < n; ++i)
        {
            int k = nums[i] - nums[0];
            if (k % 2 == 1)
                break;
            else
            {
                if (check(nums, k))
                {
                    get(nums, k);
                    break;
                }
            }
        }
        return res;
    }
};