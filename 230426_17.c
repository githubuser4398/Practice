#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m = 0, n = 0, temp, r, p;
	printf("请输入两个正整数:");
	scanf("%d,%d", &m, &n);
	if (m < n) {
		temp = n;
		m = n;
		n = temp;
	}
	p = m * n;
	while (m != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	printf("最大公约数为%d", m);
	printf("最小公倍数为%d", p/n);
	return 0;
}