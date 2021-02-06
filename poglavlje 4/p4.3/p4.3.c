#include <stdio.h>

int odd(int n){
	return (n & 1) ? 1 : 0;
}

int main(){
	int n;
	printf("Unesite broj: "); scanf("%d", &n);
	printf("Broj je %sparan\n", odd(n) ? "ne" : "");
	return 0;
}
