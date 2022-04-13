
#include <stdio.h>
#include <vector>
using namespace std;

#define max(a, b) (((a) > (b)) ? (a) : (b))
#define min(a, b) (((a) < (b)) ? (a) : (b))

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();

        if (n > m) //保证数组1一定最短
        {
            return findMedianSortedArrays(nums2, nums1);
        }

        // Ci 为第i个数组的割,比如C1为2时表示第1个数组只有2个元素。LMaxi为第i个数组割后的左元素。RMini为第i个数组割后的右元素。
        int LMax1, LMax2, RMin1, RMin2, c1, c2, lo = 0, hi = 2 * n; //我们目前是虚拟加了'#'所以数组1是2*n长度

        while (lo <= hi) //二分
        {
            c1 = (lo + hi) / 2; //c1是二分的结果
            c2 = m + n - c1;

            LMax1 = (c1 == 0) ? INT_MIN : nums1[(c1 - 1) / 2];
            RMin1 = (c1 == 2 * n) ? INT_MAX : nums1[c1 / 2];
            LMax2 = (c2 == 0) ? INT_MIN : nums2[(c2 - 1) / 2];
            RMin2 = (c2 == 2 * m) ? INT_MAX : nums2[c2 / 2];

            if (LMax1 > RMin2)
                hi = c1 - 1;
            else if (LMax2 > RMin1)
                lo = c1 + 1;
            else
                break;
        }
        return (max(LMax1, LMax2) + min(RMin1, RMin2)) / 2.0;
    }
};

int main(int argc, char *argv[])
{
    vector<int> nums1 = {2, 3, 5};
    vector<int> nums2 = {1, 4, 7, 9};

    Solution solution;
    double ret = solution.findMedianSortedArrays(nums1, nums2);
    return 0;
}
double soso(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    if (n > m)
        return soso(b, a);
    int lm1, lm2, rn1, rn2, c1, c2, l = 0, h = 2 * n;
    while (l <= h)
    {
        c1 = (l + h) / 2;
        c2 = n + m - c1;
        lm1 = c1 == 0 ? INT_MIN : a[(c1 - 1) / 2];
        rn1 = c1 == 2 * n ? INT_MAX : a[c1 / 2];
        lm2 = c2 == 0 ? INT_MIN : b[(c2 - 1) / 2];
        rn2 = c2 == 2 * n ? INT_MAX : b[c2 / 2];
        if (lm1 > rn2)
            h = c1 - 1;
        else if (lm2 > rn1)
            l = c1 + 1;
        else
            break;
    }
    return (max(lm1, lm2) + min(rn1, rn2)) / 2.0;
}
double soso(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    if (n > m)
        return soso(b, a);
    int ma, mb, na, nb, ca, cb, l = 0, h = 2 * n;
    while (l <= h)
    {

        ma = ca == 0 ? INT_MIN : a[(ca - 1) / 2];
        mb = ca == 2 * n ? INT_MAX : a[ca / 2];
        na = cb == 0 ? INT_MIN : b[(cb - 1) / 2];
        nb = cb == 2 * m ? INT_MAX : b[cb / 2];
        if (ma > nb)
            h = ca - 1;
        else if (mb > na)
            l = ca + 1;
        else
            break;
    }

    return (max(ma, mb) + min(na, nb)) / 2.0;
}
double soso(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    if (n > m)
        return soso(b, a);
    int ma, mb, na, nb, ca, cb, l = 0, h = 2 * n;
    while (l <= h)
    {
        ca = (l + h) / 2;
        cb = m + n - ca;
        ma = ca == 0 ? INT_MIN : a[(ca - 1) / 2];
        na = ca == 2 * n ? INT_MAX : a[ca / 2];
        mb = cb == 0 ? INT_MIN : b[(cb - 1) / 2];
        nb = cb == 2 * n ? INT_MAX : b[cb / 2];
        if (ma > nb)
            h = ca - 1;
        else if (mb > na)
            l = ca + 1;
        else
            break;
    }
    return (max(ma, mb) + min(na, nb)) / 2.0;
}
//  目前就是一个好理解 但是没有现成的代码
// 一个是文字的。。但是有现成代码。
// 。。回头在试下理解。
//