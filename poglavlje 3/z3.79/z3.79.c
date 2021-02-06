#include <stdio.h>
#include <math.h>

int main(){
	int n, i = 0;
	printf("Unesite broj: "); scanf("%d", &n);
	while(n > pow(2, i)){
		i++;
	}
	printf("%f\n", n * pow(2, i));
 	return 0;
}