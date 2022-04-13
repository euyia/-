#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ========================
class Solution
{
public:
    vector<int> F;
    int father(int i)
    {
        if (i != F[i])
            F[i] = father(F[i]);
        return F[i];
    }
    int countComponents(int n, vector<vector<int>> &edges)
    {
        F.resize(n);
        for (int i = 0; i < n; ++i)
            F[i] = i;
        for (auto &e : edges)
        {
            int f1 = father(e[0]);
            int f2 = father(e[1]);
            if (f1 == f2)
                continue;
            if (f1 < f2)
            {
                F[f1] = f2;
            }
            else
            {
                F[f2] = f1;
            }
        }
        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            s.insert(father(i));
        }
        return s.size();
    }
};
