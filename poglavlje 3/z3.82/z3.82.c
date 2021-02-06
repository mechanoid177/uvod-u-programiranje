#include <stdio.h>

int main()
{
	int a, n, i, k = 1;
	printf("Unesite broj: "); scanf("%d", &a);
	printf("Redni broj bita: "); scanf("%d", &n);
	for(i = 1; i < n; i++){
		k *= 2;
	}
	printf("%d\n", a | k);
	return 0;
}