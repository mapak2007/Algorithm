#include <stdio.h>
#include <stdlib.h>
void swap(int* n1, int* n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void selection(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min]);
	}
}
int main(void)
{
	int nx;

	puts("���� ����");
	printf("��� ����: ");
	scanf("%d", &nx);
	int* x = calloc(nx, sizeof(int));

	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf("%d", &nx);
	}

	bubble(x, nx);

	puts("������������ �����߽��ϴ�.");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}