#include <stdio.h>
#include <math.h>

double logx(double x, int n){
	int i;
	double s;
	if(x <= -1 || x > 1){
		printf("Pogresan unos. Promenljiva x mora biti u intervalu (-1, 1]\n");
		exit(0);
	}
	for(i = 1; i <= n; i++){
		s += pow(-1, i - 1) * pow(x, i) / i;
	}
	return s;
}

int main(){
	int n;
	double x;
	printf("Unesite vrednost za x: ");
	scanf("%lf", &x);
	printf("Unesite broj ponavljanja: ");
	scanf("%d", &n);
	printf("logx(%lf, %d) = %lf	log(1 + %lf) = %lf\n", x, n, logx(x, n), x, log(1 + x));
	printf("log(1 + %lf) - logx(%lf, %d) = %lf\n", x, x, n, log(1 + x) - logx(x, n));
	return 0;
}