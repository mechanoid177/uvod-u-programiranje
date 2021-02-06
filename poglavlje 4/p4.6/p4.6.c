#include <stdio.h>

int faktorijel(int n){
	if(n == 0) return 1;
	else return n * faktorijel(n - 1);;
}

int main (){
	int n;
	printf("Unesite broj: "); scanf("%d", &n);
	printf("Faktorijal je %d\n", faktorijel(n));
}
