#include <all.h>
// 现在教学资源这么丰富。只要你敢冲。没有啥知识点是 你拿不下的。加油 上山人。
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;
#include <stdio.h>

int main()
{
	unsigned long long n;
	scanf("%lld", &n);
	if (n <= 3)
		printf("0\n");
	else
		printf("%lld\n", n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4);
	return 0;
}
// c4n
// 本来是 n都在上面然后下面是1*2*3*4 。
// 但是为了避免数字太大溢出。所以分开分母。
// 而且证明了。一定能够除尽。
// 2 是因为两个连续的数 肯定有一个是偶数。
// 3 是三个连续的数一定有一个能除尽3.。
// 太庙了。
