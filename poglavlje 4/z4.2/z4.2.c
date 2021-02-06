#include <stdio.h>

double aritm_sr(int n){
	int a, s = 0, i = n;
	while(--i >= 0){
		printf("Unesite broj: ");
		scanf("%d", &a);
		s += a;
	}
	return 1.0 * s / n;
}

int main(){
	int n;
	printf("Unesite broj brojeva: ");
	scanf("%d", &n);
	printf("%f\n", aritm_sr(n));
	return 0;
}