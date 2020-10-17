#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, max, N, x[100];
	printf("Enter N: ");
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		printf("x[%d] = ", i);
		scanf("%d", &x[i]);
	}
	max = x[0];
	for (i = 1; i < N; i++)
		if (max < x[i])  max = x[i];
	printf("Maximum = %d\n\n", max);
}
