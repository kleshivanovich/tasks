#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sort(int *q, int n)
{
	int i, j, k;
	for (i = 0; i < n; ++i)
	for (j = 0; j < n - 1; ++j)
		if (q[j]>q[i])
		{
			k = q[i];
			q[i] = q[j];
			q[j] = k;
		}
}

int main()

{
	int i, j, n;
	int *q;
	printf("\nInsert the quantity numbers:");
	scanf("%d", &n);
	q = (int*)malloc(n*sizeof(int));
	printf("\nInsert the numbers and put 0 after last:");
	for (i = 0; i < n; ++i)
		scanf("%d ", &q[i]);
	sort(q, n);
	for (i = 0; i < n; ++i)
		printf("\n%d", q[i]);
	free(q);
	return 0;
}