#include <stdio.h>

int main()
{
	int n, p = 1, d;
	printf("Unesite granicu: "); scanf("%d", &n);
	while(p < n){
		printf("Unesite broj: "); scanf("%d", &d);
		printf("Novi proizvod: %d\n", p *= d);
	}
	printf("Kraj\n");
	return 0;
}
