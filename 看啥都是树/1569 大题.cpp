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
/**
    要构造一样的BST，则我们首先必须插入一样的根，即一开始的可选节点只有一个
    插入根之后，我们可以选择任意顺序插入左右两个子树的根，但是不能插入其他
    因为插入之后BST就会不一致，因此我们发现：在插入一个节点后，下一次插入的
    可选节点是确定的。
    例如例子一，如果我们第一次插入1,3则错误，因此第一次只能插入2，接下来可以
    插入的节点为[1,3]，则我们可以任意选择，如果我们选择插入1，则接下来只能插
    人3，队3也是如此。
    对于例子2，一开始我们只能插入3，接下来可以选择插入1,4，如果选择插入1，则
    接下来可以选择插入2,4，插入2之后只能选择插入4，插入4之后只能选择插入5，
    此时一种序列构造完毕，但是我们的每次选择中都能选择另外的其他选择构成不同
    的序列。
    因此回溯法可以暴力构造出所有可能的方案，但是显然复杂度过高。
    但是我们显然可以从例2发现：我们选择插入[3,1,4]和选择[3,4,1]之后剩下的插
    入部分是一样的。即如果前半部分的排列是合法的，则剩下元素的排列方式是重复
    的。    
    本质上我们知道左右两个子树的构成序列数量时，如何将两颗子树的所有可能构造
    序列合并在一起？
    本质上只要我们不改变两个序列各自的相对位置即可。
    即从一共x+y个位置中选择x个位置，然后将x的序列放入其中，因此两个序列的合
    并方式为C_(x+y)^x，而从x，y两个集合中枚举所有的序列对则共有x*y种，因此
    dp[root] = dp[left]*dp[right]*C_(size_x+size_y)^size_x
    而对于所有叶子节点显然有dp[root] = 1
    dp的复杂度仅为O(n)
    而预先求组合数为O(n^2)
    我们用数组模拟二叉树的方式构造原始二叉树，并统计子树规模，dfs，O(nlogn)
    而实际上我们可以不用预先求出所有组合数，组合数C_m^n = A_m^n/n!= m!/(n!*(m-n)!)
    因此我们只需要预先求出所有阶乘即可在O(1)计算每个组合数。
    但是当m过大的时候，我们往往需要对求取的结果进行取模，但是【除法操作是无
    法取模的，例如(5%3)/(2%3)=1，但是真实的(5/3)%3=1】，因此当m过大时，我们
    需要利用分母的【乘法逆元】来用乘法代替除法。

    ## 求一个数的乘法逆元：##
    1.费马小定理：a^(p-1)=1(mod p)，即对任何一个自然数a，一个质数p，有以上
    结论。证明：显然1^(p)=1(mod p)，则设a^P=a(mod p)，求(a+1)^p=? (mod p)
    由二项式定理：(a+1)^p=a^p+C_p^1*a^(n-1)+...+1，在mod p的情况下，C_p^n
    对于n = [1,p-1]的分子部分必然存在一个p，因此所有组合数mod p都为0，因此
    (a+1)^p=a^p+1(mod p)，由于假设a^p=a(mod p)，因此有(a+1)^p=a+1(mod p)。
    得整a^(p-1)=1(mod p)
    2.设x为a的mod p乘法逆元，则有ax=1(mod p)，利用费马小定理替换1(mod p)，
    得到ax=a^(p-1)(mod p)，则左右两边同除a，得到x=a^(p-2)(mod p)，完毕。
    因此a mod p的乘法逆元=a^(p-2)(mod p)，因此我们可以用快速幂O(logp)求任意
    元素的逆元。

    ## 求[1,n]所有元素的乘法逆元，挨个求的复杂度显然为O(nlogp)。##
    考虑一种基于动态规划的线性求逆元方法：仍然显然有1^(-1)=1(mod p)，即无论
    是mod多少，1*1=1是不会改变的，因此1的逆元必然是自身。
    接下来对于任意一个数i，p是一个质数，则考虑用i表示p：p=(p/i)*i+p%i
    则显然p(mod p)=(p/i)*i+p%i(mod p)=0(mod p)，设p%i=j，则显然j<i，则左右两
    边同Xj^(-1)得到(p/i)*j^(-1)*i+1=0(mod p)，则移项得到-(p/i)*j^(-1)*i=1(mod p)
    即i(mod p)的逆元为-(p/i)*j^(-1)，则如果我们递推地求逆元，j^(-1)已知，因
    此每个数的逆元仅需O(1)即可求出
    
    ## 如何快速求任意n个数逆元 ##
    仍然是基于动态规划的求解方法：对于任何n个数，则我们无法保证j^(-1)一定已经
    求出。因此我们考虑其他做法，由于乘法逆元可以用于抵消乘法运算，因此我们先求
    出所有n个数累乘的结果，然后我们对该累乘结果求一次O(logn)的逆元，得到了所有
    数累乘的结果的逆元，则a1*a2*a3*..*an*(a1*a2*a3*..a*n)^(-1)=a1*a1^(-1)*..an*an^(-1)=1(mod p)
    则左右两边同除以a1*..*ana得到(a1*a2*a3*..a*n)^(-1)=a1^(-1)*..an^(-1)(mod p)
    则此时左右两边同乘上an得到(a1*a2*a3*..a*n)^(-1)*an=a1^(-1)*..an-1^(-1)(mod p)
    即我们先求出整体累乘结果的逆元，然后逆序用乘法抵消来求出所有分段累乘的逆元
    pinv[i]表示(a1*..*ai)^(-1)，接下来我们再用得到结论，用(a1*..*ai-1)的累乘结果
    来取消前面部分的逆元，得到inv[i]，因此我们仅需要O(n)的复杂度即可求出所有n
    个数的逆元。
*/
class Solution
{
public:
    vector<int> left, right, size, A, inv;
    int mod = 1e9 + 7;

    int qpow(long long base, int exp)
    {
        int res = 1;
        while (exp)
        {
            if (exp & 1)
                res = (res * base) % mod;
            base = (base * base) % mod;
            exp >>= 1;
        }

        return res;
    }

    int numOfWays(vector<int> &nums)
    {
        int len = nums.size();
        left.assign(len + 1, 0);
        right.assign(len + 1, 0);
        size.assign(len + 1, 1);
        A.assign(len + 1, 1);
        inv.assign(len + 1, 1);
        size[0] = 0;
        for (int i = 2; i <= len; i++)
            A[i] = 1LL * A[i - 1] * i % mod;
        long long prod = 1;
        for (int i = 2; i <= len; i++)
        {
            prod = (prod * A[i]) % mod;
            inv[i] = prod;
        }

        long long pinv = qpow(prod, mod - 2);
        for (int i = len; i > 1; i--)
        {
            inv[i] = pinv * inv[i - 1] % mod;
            pinv = (pinv * A[i]) % mod;
        }

        for (int i = 1; i < len; i++)
            insert(nums[0], nums[i]);

        return dfs(nums[0]) - 1;
    }

    void insert(int root, int val)
    {
        size[root]++;
        if (val < root)
        {
            if (left[root])
                insert(left[root], val);
            else
                left[root] = val;
        }
        else
        {
            if (right[root])
                insert(right[root], val);
            else
                right[root] = val;
        }
    }

    inline int C(int m, int n)
    {
        return 1LL * A[m] * inv[n] % mod * inv[m - n] % mod;
    }

    int dfs(int root)
    {
        if (!root)
            return 1;
        int l = dfs(left[root]);
        int r = dfs(right[root]);
        return 1LL * l * r % mod * C(size[left[root]] + size[right[root]], size[left[root]]) % mod;
    }
};