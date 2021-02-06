#include <stdio.h>

int main()
{
	unsigned n, i, j, k;
	printf("Unesite broj redova: "); scanf("%d", &n);
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			printf(" ");
		}
		for(k = 2 * (n - i) - 1; k >= 1; k--) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}