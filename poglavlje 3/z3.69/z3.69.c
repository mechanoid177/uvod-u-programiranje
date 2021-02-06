#include <stdio.h>

int main(){
	unsigned n, i, j;
	printf("Unesite broj redova: "); scanf("%d", &n);
	for(i = 1; i <= n / 2; i++){
		for(j = 1; j <= n / 2 - i; j++){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf(" ");
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0; i < n / 2; i++){
		for(j = 1; j <= i; j++){
			printf(" ");
		}
		for(j = 1; j <= n / 2 - i; j++){
			printf("*");
		}
		printf(" ");
		for(j = 1; j <= n / 2 - i; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
