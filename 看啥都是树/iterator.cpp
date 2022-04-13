// #include <vector>
// #include <iostream>
// #include <algorithm>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
// using namespace std;
int main(void)
{
    // 这个文件
    list<int> coll;
    for (int i = 0; i < 20; ++i)
        coll.push_back(i);
    list<int>::iterator pos;
    pos = find(coll.begin(), coll.end(), 3);
    // cout << *pos << endl;
    vector<int> next(26, 2);
    memset(&next[0], 0, sizeof(next));
    cout << sizeof(next) << "" << endl;

    // for (int i = 0; i < 26; ++i)
    //     cout << next[i] << "" << endl;
    // pos=pos+1;
    // cout << *(pos + 1) << endl;

    // pos++;
    // cout << *pos << endl;

    // // char a[] = "this is a simple example";
    // char b[] = "simple";
    // char *p = strstr(a, b);

    // printf("字符串起始地址值：%s\n", p);
    // printf("字符串起始地址值：%p\n", p);
    return 0;
};