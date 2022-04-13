#include <all.h>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
// #include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s, t;
    cin >> n;
    cin >> s;
    unordered_map<string, int> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        mp[t] = 1;
        //    要用一个数据结构去存起来。不能当场分析的。
        // 到时候 我们从s开始去检索 ，想用map 然后走一个删一个。。但是不知道怎么删。。
        // 然后走到最后。。看是不是s本身。就是过河拆桥。
    }
    t = s;
    while (mp.size())
    {
        bool flag = true;
        for (auto m : mp)
            if (m.first.substr(0, 3) == s)
            {
                s = m.first.substr(5, 3);
                mp.erase(m.first);
                flag = false;
                break;
            }
        if (flag)
            break;
    }
    if (s == t)
        cout << "home";
    else
        cout << "contest";
    return 0;
}
// 暴露了一个问题 map的。。就是他是可以重复存值的吗。。然后删的时候参数是key 还是值 还是迭代器。