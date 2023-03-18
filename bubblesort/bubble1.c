#include <stdio.h>
#include <stdlib.h>
void swap(int* n1, int* n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

void bubble(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; j > i; i--)
			if (a[j - 1] > a[j])
				swap(int, a[j - 1], a[j]);
	}
}

int main(void)
{
	int nx;

	puts("버블 정렬");
	printf("요소 개수: ");
	scanf("%d", &nx);
	int* x = calloc(nx, sizeof(int));

	for (int i = 0; i < nx; i++) {
		printf("x[%d]: ", i);
		scanf("%d", &nx);
	}

	bubble(x, nx);

	puts("오름차순으로 정렬했습니다.");
	for (int i = 0; i < nx; i++)
		printf("x[%d] = %d\n", i, x[i]);

	free(x);

	return 0;
}
