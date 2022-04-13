#include <algorithm>
#include <unordered_map>
#include <set>
#include <array>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head)
{
    unordered_set<ListNode *> s;
    while (!s.count(head))
    {
        s.insert(head);
        head = head->next;
    }
    return head;
}
string shorttest(string nums, vector<string> &words)
{
    int n = words.size();
    array<int, 26> res;
    for (char num : nums)
        if (isalnum(num))
            ++res[tolower(num) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        array<int, 26> ret;
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                ok = false;
                break;
            }
        if (ok && (index < 0 || (words[i].length() < words[index].length())))
            index = i;
    }
    return words[index];
}
string shorttest(string nums, vector<string> &words)
{
    int n = words.size();
    array<int, 26> res;
    for (char num : nums)
        if (isalpha(num))
            ++res[tolower(num) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        array<int, 26> ret;
        bool ok = true;
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                ok = false;
                break;
            }
        if (ok && (index < 0 || words[i].length() < words[index].length()))
            index = i;
    }
    return words[index];
}
string shorttest(string nums, vector<string> &words)
{
    int n = words.size();
    array<int, 26> res;
    for (char num : nums)
        if (isalpha(num))
            ++res[tolower(num) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        array<int, 26> ret;
        bool ok = true;
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                ok = false;
                break;
            }
        if (ok && (index < 0 || words[i].length() < words[index].length()))
            index = i;
    }
    return words[index];
}
string shorttest(string nums, vector<string> &words)
{
    int n = words.size();
    array<int, 26> res;
    for (char num : nums)
        if (isalpha(num))
            ++res[tolower(num) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        array<int, 26> ret;
        bool ok = true;
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                ok = false;
                break;
            }
        if (ok && (index < 0 || words[i].length() < words[index].length()))
            index = i;
    }
    return words[index];
}
string shorttest(string nums, vector<string> &words)
{
    int n = words.size();
    array<int, 26> res;
    for (char num : nums)
        if (isalpha(num))
            ++res[tolower(num) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool ok = true;
        array<int, 26> ret;
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                ok = false;
                break;
            }
        if (ok && (index < 0 || words[i].length() < words[index].length()))
            index = i;
    }
    return words[index];
}
string soso(string nums, vector<string> &words)
{
    int n = words.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index == -1 || words[i].size() < words[index].size()))
            index = i;
    }
    return words[index];
}
string soso(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index == -1 || word[i].length() < word[index].length()))
            index = i;
    }
    return word[index];
}
string soso(string nums, vector<string> &words)
{
    int n = words.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : words[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || words[i].size() < words[index].size()))
            index = i;
    }
    return words[index];
}
string soso(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
string soso(string nums, vector<string> &word)
{
    int n = word.size();
    int res[2]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; j++)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
string sosos(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
string soso(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
string soso(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = true;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
string sosso(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[towlower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; ++j)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
string sosos(string nums, vector<string> &word)
{
    int n = word.size();
    int res[26]{};
    for (char n : nums)
        if (isalpha(n))
            ++res[tolower(n) - 'a'];
    int index = -1;
    for (int i = 0; i < n; ++i)
    {
        bool flag = true;
        int ret[26]{};
        for (char w : word[i])
            ++ret[w - 'a'];
        for (int j = 0; j < 26; j++)
            if (res[j] > ret[j])
            {
                flag = false;
                break;
            }
        if (flag && (index < 0 || word[i].size() < word[index].size()))
            index = i;
    }
    return word[index];
}
