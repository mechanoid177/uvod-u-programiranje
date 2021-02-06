#include <stdio.h>

double pow1(double a, double b){
	if(b == 0) return 1;
	return a * pow1(a, b - 1);
}

int main(){
	int a, b;
	printf("Unesite broj: ");
	scanf("%d", &a);
	printf("Unesite stepen: ");
	scanf("%d", &b);
	printf("a^b = %f\n", pow1(a, b));
	return 0;
}