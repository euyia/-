#include <all.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *random;
    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
class Solution
{
public:
    int singleNumbers(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> res;
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];
        for (int i = 1; i < n - 1; ++i)
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                return nums[i];
    }
};
class Solution
{
public:
    vector<int> singleNumbers(vector<int> &nums)
    {
        int n = 0;
        for (int &num : nums)
            n ^= num;
        int m = 1;
        while (0 == (m & n))
            m = m << 1;

        int a = 0, b = 0;
        for (int &num : nums)
        {
            if (num & m)
                a ^= num;
            else
                b ^= num;
        }
        return {a, b};
    }
};
//  在能力chi