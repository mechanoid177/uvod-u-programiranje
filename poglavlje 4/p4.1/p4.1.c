#include <stdio.h>

int max(int a, int b){
	return (a > b ? a : b);
}

int main(){
	int a, b;
	printf("Unesite brojeve: \n"); scanf("%d\n", &a);
	scanf("%d", &b);
	printf("Veci je: %d\n", max(a, b));
	return 0;
}
