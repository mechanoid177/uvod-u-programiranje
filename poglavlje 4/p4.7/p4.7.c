#include <stdio.h>
#include <math.h>

double f_rek(int n){
	if(n == 1) return sqrt(2);
	return sqrt(2 + f_rek(n - 1));
}

double f_ite(int n){
	int i;
	double s = sqrt(2);
	for(i = 1; i < n; i++) s = sqrt(2 + s);
	return s;
}

int main()
{
	int n;
	printf("Unesite broj "); scanf("%d", &n);
	printf("Rekurzija = %f\nIterativa = %f\n", f_rek(n), f_ite(n));
	return 0;
}