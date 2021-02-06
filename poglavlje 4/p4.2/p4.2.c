#include <stdio.h>

void ispis(int n){
	printf("%d\n", n);
}

main(){
	int n;
	printf("Unesite broj: "); scanf("%d", &n);
	ispis(n);
}