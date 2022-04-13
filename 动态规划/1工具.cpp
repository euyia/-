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

auto fast = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();