#include <stdio.h>

int main(){
	int a, n, i;
	printf("Unesite broj: "); scanf("%d", &a);
	printf("Unesite koliko se puta deli: "); scanf("%d", &n);
	for(i = 1; i <= n; i++){
		a = a >> 1;
	}
	printf("%d\n", a);
	return 0;
}