#include <stdio.h>

#define N 10

int main()
{
	int a[N];
	int cnt = 0;
	int retry;
	puts("������ �Է��ϼ���.");
	do {
		printf("%d��° ����: ", cnt + 1);
		scanf("%d", &a[cnt++ % N]);
		printf("����ұ��?(Yes     1/No     0): ");
		scanf("%d", &retry);
	} while (retry == 1);
	i = cnt - N;
	if (i < 0) i = 0;
	for (; i < cnt; i++)
		printf("%2d��° ���� = %d\n", i + 1, a[i % N]);

	return 0;
}