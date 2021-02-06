#include <stdio.h>

int main()
{
	unsigned i, j, n;
	printf("Unesite br redova: "); scanf("%d", &n);
	for(i = n; i >= 1; i--){
		for(j = 1; j <= i; j++){
			printf("*");			
		}
		printf("\n");
	}
	return 0;
}
