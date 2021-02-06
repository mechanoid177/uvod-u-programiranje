#include <stdio.h>

int main(){
	int i, n;
	float j = 0;
	printf("Unesite broj: "); scanf("%d", &n);
	for(i = 1; i <= n; i++){
		j += 1.0 / i;
	}
	printf("Resenje je: %f\n", n / j);	
	return 0;
}
