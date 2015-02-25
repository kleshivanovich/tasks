#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


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
	for (i = 0; i < n; ++i)
		printf("\n%d", q[i]);
	free(q);
	return 0;
}