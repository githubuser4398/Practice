#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int m = 0, n = 0, temp, r, p;
	printf("����������������:");
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
	printf("���Լ��Ϊ%d", m);
	printf("��С������Ϊ%d", p/n);
	return 0;
}