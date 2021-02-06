#include <stdio.h>
#include <math.h>

double heron(int a, int b, int c){
	double p;
	p = 1.0 * (a + b + c) / 2;
	return sqrt(1.0 * p * (p - a) * (p - b) * (p - c ));
}

int main(){
	int a, b, c;
	printf("Unesite stranice: ");
	scanf("%d%d%d", &a, &b, &c);
	if(!((a + b > c) && (a + c > b) && (b + c > a))){
		printf("Duzine stranica se ne poklapaju\n");
		return 0;
	}
	printf("P = %lf\n", heron(a, b, c));
	return 0;
}