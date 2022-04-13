#include <all.h>
using namespace std;
// 你已被移出这个世界。
// 可以剪切少的 删了其余啊。。这么好的思路。
// 多学习好的解题方法。。然后多把时间花在这个上面。这才是学习。。
// 研究也是需要的。。但是目前更多的应该是模仿。。才是。。
// 时间占比大的应该放在模仿上。。。直接形成正确的动作习惯。。这才是聪明的 不造轮子。
// 目前。。但是只是目前。。造轮子是早晚的。。因为造轮子的人才是有灵魂的。

class Solution
{
    int dir[4][2] = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }

public:
    // 需要一个偏移数组。
    // 从每个点当做入口 去找。
    // 还要一个vis 不能回头。。pre不够。因为这里不是树。pre不够
    // 出口就是s长度够了。。只要有一个返回true 就是 不然返回false
    bool exist(vector<vector<char>> &nums, string s)
    {
        n = nums.size();
        m = nums[0].size();
        k = s.size();
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (dfs(i, j, 0, nums))
                    return true;
        return false;
    }
    int k;
    string t;
    bool dfs(int x, int y, int cnt, vector<vector<char>> &nums)
    {
        if (cnt == k)
            return true;
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];
            if (out(l, r))
                continue;
            if (t[cnt] != nums[l][r])
                continue;
            if (dfs(l, r, cnt + 1, nums))
                return true;
        }
        return false;
    }
};

class Solution
{
    int dir[4][2] = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }

public:
    // 需要一个偏移数组。
    // 从每个点当做入口 去找。
    // 还要一个vis 不能回头。。pre不够。因为这里不是树。pre不够
    // 出口就是s长度够了。。只要有一个返回true 就是 不然返回false
    bool exist(vector<vector<char>> &nums, string s)
    {
        t = s;
        n = nums.size();
        m = nums[0].size();
        k = s.size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                dfs(i, j, 0, nums, vis);
                if (flag)
                    return true;
            }

        return false;
    }
    int k;
    string t;
    bool flag = false;
    void dfs(int x, int y, int cnt, vector<vector<char>> &nums, vector<vector<int>> &vis)
    {
        if (vis[x][y])
            return;
        if (flag)
            return;
        if (t[cnt] != nums[x][y])
            return;
        if (cnt == k - 1)
        {
            flag = true;
            return;
        }
        vis[x][y] = 1;
        //这个vis 加标记的位置不能太靠前。。如果太靠前。。然后在上面的if 被return出去了。。那就乌龙了。因为这个点并没有实际被访问过。
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];
            if (out(l, r))
                continue;
            dfs(l, r, cnt + 1, nums, vis);
        }
        vis[x][y] = 0;
        return;
    }
};
class Solution
{
    int dir[4][2] = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }

public:
    vector<string> findWords(vector<vector<char>> &a, vector<string> &b)
    {
        // 对每个字母 然后去匹配所有的可能的第一个字母。。这样只需要遍历一遍。
        vector<string> nums[128];
        n = a.size();
        m = a[0].size();
        int k = b.size();
        cur = a;
        // ......
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < k; ++i)
        {
            nums[b[i][0]].push_back(b[i]);
        }
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                if (!nums[a[i][j]].size())
                    continue;
                dfs(i, j, a[i][j], 1, nums, b, vis);
            }
    }
    vector<vector<char>> cur;
    void dfs(int x, int y, int left, int right, vector<string> nums[], vector<string> &b, vector<vector<int>> &vis)
    {
        // 核心要避开word的大数据。。我们从方向这个角度。更少的分类
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];
            if (out(l, r) || vis[l][r])
                continue;
            vector<string> res;
            for (int j = 0; j < nums[l].size(); ++j)
            {
                if (nums[l][j].size() <= r)
                    continue;
                // 这样还要一个一个去验证 很笨。。 验证完 还要把剩下的保留下来。
                // 其实也可以把符合条件的选出来 开辟另外一个数组来容纳。
                if (nums[l][j][r] == cur[l][r])
                    res.push_back(nums[l][j]);
                // 这样太费劲了。
            }
        }
    }
};
// 也是预处理单词。
// 只不过他用前缀树。。。
struct TrieNode
{
    string word;
    unordered_map<char, TrieNode *> mp;
    // 这个是核心。。相当于每个字母char 都映射到另外一个表 然后这里存的是那个表的地址trinode*
    // 以前是用数组做的。。数组下标相当于分支。然后数组上的值 存的是下一个分支的数组地址。
    // 相当于是数组单个元素又嵌套数组。。嵌套了无数层。。
    // 相当于是数组嵌套数组。。嵌套了无数层。。
    // 相当于是数组嵌套数组。。嵌套了无数层。。
    TrieNode()
    {
        this->word = "";
    }
};

void insertTrie(TrieNode *root, const string &word)
{
    // 传入根节点 word 每个单词。
    TrieNode *node = root;
    // 对这个单词进行遍历 每个字母。
    for (auto c : word)
    {
        if (!node->mp.count(c))
        {
            // 如果这个字母在这一层还没有 那么就建立一个分支。。现在看这个结构就好简单
            node->mp[c] = new TrieNode();
            // 这里node->mp[c] 相当于下一层的mp[c]
        }
        node = node->mp[c];
    }
    node->word = word;
    // 这是在最后一层对应的位置 打上标记。。是最后一层 还是最后一层的。当前root位置
    // 比如absd。。他这个word 是d层的string
    // 但是怎么用这个字典树呢。。建是建起来了。
}
// 不是很懂 这些结构可以写在答案外面吗？？？？
class Solution
{
public:
    int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    bool dfs(vector<vector<char>> &board, int x, int y, TrieNode *root, set<string> &res)
    {
        char ch = board[x][y];
        if (!root->mp.count(ch))
        {
            return false;
        }
        root = root->mp[ch];
        // 懂了 。。。他这里就是去用上下左右的情况 去匹配字典树。。匹配上的判断这一段有没有合法的单词
        // 他直接去用每一个节点的所有拓展可能 去匹配那个字典树。。
        // 有点像两张图之间的匹配。。。
        if (root->word.size() > 0)
        {
            res.insert(root->word);
        }

        board[x][y] = '#';
        // 他这边把遍历过的元素直接换成别的。。省去了一个vis数组。。又是变体操作。。秀儿
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + dirs[i][0];
            int ny = y + dirs[i][1];
            if (nx >= 0 && nx < board.size() && ny >= 0 && ny < board[0].size())
            {
                // 这个相当于out 函数 判断是否越界
                if (board[nx][ny] != '#')
                {
                    // 这个相当于vis判断
                    dfs(board, nx, ny, root, res);
                }
            }
        }
        board[x][y] = ch;

        return true;
    }

    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        TrieNode *root = new TrieNode();
        set<string> res;
        vector<string> ans;

        for (auto &word : words)
        {
            insertTrie(root, word);
        }
        //    这边把字典树建起来。
        for (int i = 0; i < board.size(); ++i)
        {
            for (int j = 0; j < board[0].size(); ++j)
            {
                dfs(board, i, j, root, res);
                // 这边就是对每个坐标作为入口 去递归。。easy
            }
        }
        for (auto &word : res)
        {
            ans.emplace_back(word);
        }
        return ans;
    }
};

class Solution
{
public:
    vector<string> res;
    set<string> ans;
    int dir[4][2] = {
        {1, 0},
        {-1, 0},
        {0, 1},
        {0, -1}};

    int n, m;
    bool out(int x, int y)
    {
        if (x < 0 || x >= n)
            return true;
        if (y < 0 || y >= m)
            return true;
        return false;
    }

    vector<string> findWords(vector<vector<char>> &a, vector<string> &b)
    {
        n = a.size();
        m = a[0].size();
        Trinode *root = new Trinode();
        for (string word : b)
        {
            insert(root, word);
        }
        //    这一步就直接解决了建树。。。真的好用啊。。我去。。
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                dfs(i, j, a, root);
        for (auto an : ans)
            res.push_back(an);
        return res;
    }

    struct Trinode
    {
        string word;
        unordered_map<char, Trinode *> mp;
        Trinode() { this->word = ""; };
        // 都忘记怎么写那个初始化了 。。。。。：括号还是啥的。。等下看下。
        // 类名和构造函数一般大写开头。。这个就不要偷懒了。。
        // 但是偷懒应该也是可以了 等下还试下。。？？？？
    };
    void insert(Trinode *root, string word)
    {
        Trinode *node = root;
        for (char c : word)
        {
            if (node->mp.count(c) == 0)
            {
                node->mp[c] = new Trinode();
            }
            node = node->mp[c];
        }
        node->word = word;
    }

    void dfs(int x, int y, vector<vector<char>> &a, Trinode *root)
    {
        char c = a[x][y];
        if (root->mp.count(c) == 0)
            return;
        root = root->mp[c];
        if (root->word.size() != 0)
            ans.insert(root->word);
        a[x][y] = '#';
        for (int i = 0; i < 4; ++i)
        {
            int l = x + dir[i][0], r = y + dir[i][1];
            if (out(l, r) || a[l][y] == '#')
                continue;
            dfs(l, r, a, root);
        }
        a[x][y] = c;
    }
};
struct Trinode
{
    string word;
    unordered_map<char, Trinode *> mp;
    Trinode()
    {
        this->word = "";
    }
};
void insert(Trinode *root, string word)
{
    Trinode *node = root;
    for (char c : word)
    {
        if (node->mp.count(c) == 0)
            node->mp[c] = new Trinode();
        node = node->mp[c];
    }
    node->word = word;
}
void insert(Trinode *root, string word)
{
    Trinode *node = root;
    for (char c : word)
    {
        if (node->mp.count(c) == 0)
            node->mp[c] = new Trinode();
        node = node->mp[c];
    }
    node->word = word;
}
void insert(Trinode *root, string word)
{
    Trinode *node = root;
    for (char c : word)
    {
        if (node->mp.count(c) == 0)
            node->mp[c] = new Trinode();
        node = node->mp[c];
    }
    node->word = word;
}
void insert(Trinode *root, string word)
{
    Trinode *node = root;
    for (char c : word)
    {
        if (!node->mp.count(c))
            node->mp[c] = new Trinode();
        node = node->mp[c];
    }
    node->word = word;
}
void insert(Trinode *root, string s)
{
    Trinode *node = root;
    for (char c : s)
    {
        if (!node->mp.count(c))
            node->mp[c] = new Trinode();
        node = node->mp[c];
    }
    node->word = s;
}
void insert(Trinode *root, string s)
{
    Trinode *node = root;
    for (char c : s)
    {
        if (!node->mp.count(c))
        {
            node->mp[c] = new Trinode();
        }
        node = node->mp[c];
    }
    node->word = s;
}
void insert(Trinode *root, string s)
{
    Trinode *node = root;
    for (char c : s)
    {

        if (!node->mp.count(c))
            node->mp[c] = new Trinode();
        node = node->mp[c];
    }
    node->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
// 这里就是root->指针访问的方式不同而已。
// 不然这里的mp 就是普通的mp。。。
// 不然这里的mp 就是普通的mp。。。
// 不然这里的mp 就是普通的mp。。。
// 以前是一个root里面有left 和right 两个节点
// 这里是一个root里面有26个节点  而且节点的key 就是他们的值。。
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (root->mp.count(c) == 0)
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (root->mp.count(c) == 0)
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            // if(!root->left)
            root->mp[c] = new Trinode();
        // root->left=new trinode();
        root = root->mp[c];
        // root=root->left;
    }
    root->word = s;
    // root->val=s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void isnert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
void insert(Trinode *root, string s)
{
    for (char c : s)
    {
        if (!root->mp.count(c))
            root->mp[c] = new Trinode();
        root = root->mp[c];
    }
    root->word = s;
}
