#include <stdio.h>

double fabsx(double x){
	return x < 0 ? -x : x;
}

int main(){
	double x;
	printf("Unesite broj: ");
	scanf("%lf", &x);
	printf("|%lf| = %lf\n", x, fabsx(x));
}
