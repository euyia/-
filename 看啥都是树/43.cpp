#include <string>
#include <vector>
using namespace std;
string soso(string a, string b)
{
    int n = a.size();
    int m = b.size();
    vector<int> vec(m + n, 0);
    for (int i = n - 1; i >= 0; --i)
        for (int j = m - 1; j >= 0; --j)
        {
            int mul = (a[i] - '0') * (b[j] - '0');
            int p = i + j, q = i + j + 1;
            int sum = vec[q] + mul;
            vec[q] = sum % 10;
            vec[p] = sum / 10 + vec[p];
        }
    string res;
    int i;
    for (i = 0; i < vec.size(); ++i)
        if (vec[i] != 0)
            break;
    for (; i < vec.size(); ++i)
        res.push_back(vec[i] + '0');
    return res.size() == 0 ? "0": res;
}