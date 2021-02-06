#include <stdio.h>

int main()
{
	unsigned n, i, j, k;
	printf("Unesite broj redova: "); scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = i; j >= 1; j--){
			printf(" ");
		}
		for(k = i; k <= n; k++){
			printf("*");
		}	
		printf("\n");
	}
	return 0;
}
