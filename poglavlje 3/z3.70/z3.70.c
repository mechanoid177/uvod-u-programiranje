#include <stdio.h>

int main()
{
	unsigned i, j, n;
	printf("Unesite broj: "); scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = i; j <= n; j++){
			printf("%d ", j);
		}
		for(j = 1; j < i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
