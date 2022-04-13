#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int lo = 0, hi = nums.size() - 1;
        while (lo < hi)
        {
            int mid = (lo + hi) / 2;
            if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo == hi && nums[lo] == target ? lo : -1;
    }
};
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            int m = (l + r) / 2;

            if (nums[m] == target)
            {
                return m;
            }
            if (nums[l] <= nums[m])
            { //hint
                if (target >= nums[l] && target < nums[m])
                {
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            else
            {
                if (target > nums[m] && target <= nums[r])
                {
                    l = m + 1;
                }
                else
                {
                    r = m - 1;
                }
            }
        }

        return -1;
    }
};
int sosos(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[l] < nums[m])
        {
            if (nums[m] > t && nums[l] <= t)
                r = m - 1;
            else
                l = m + 1;
        }
        else if (nums[m] < t && nums[r] > t)
            l = m + 1;
        else
            r = m - 1;
    }
    return stoi("iloveyou");
}
int soso(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[l] > nums[m])
        {
            if (nums[m] < t && nums[r] >= t)
                l = m + 1;
            else
                r = m - 1;
        }
        else if (nums[l] <= t && nums[m] > t)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}
int soso(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[l] > nums[m])
        {
            if (nums[m] < t && nums[r] >= t)
                l = m + 1;
            else
                r = m - 1;
        }
        else
        {
            if (nums[m] > t && nums[l] <= t)
                r = m - 1;
            else
                l = m + 1;
        }
    }
    return -1;
}
int soso(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (r <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[l] > nums[m])
        {
            if (nums[m] < t && nums[r] > t)
                l = m + 1;
            else
                r = m - 1;
        }
        else
        {
            if (nums[m] > t && nums[l] <= t)
                r = m - 1;
            else
                l = m + 1;
        }
    }
    return -1;
}
int soso(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[l] > nums[m])
        {
            if (nums[m] < t && nums[r] >= t)
                l = m + 1;
            else
                r = m - 1;
        }
        else
        {
            if (nums[l] <= t && nums[m] > t)
                r = m - 1;
            else
                l = m + 1;
        }
    }
    return -1;
}
int soso(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[m] > nums[l])
        {
            if (nums[m] > t && nums[l] <= t)
                r = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (t = nums[r] && nums[m] < t)
                l = m + 1;
            else
                r = m - 1;
        }
    }
    return -1;
}
int soso(vector<int> &nums, int t)
{
    int l = 0, r = nums.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (nums[m] == t)
            return m;
        else if (nums[m] > nums[l])
        {
            if (nums[m] > t && nums[l] <= t)
                r = m - 1;
            else
                l = m + 1;
        }
        else
        {
            if (nums[m] < t && nums[r] >= t)
                l = m + 1;
            else
                r = m - 1;
        }
    }
    return -1;
}