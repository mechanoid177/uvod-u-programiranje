#include <stdio.h>
#include <math.h>

int fakt(int n){
	if(n == 0) return 1;
	return n * fakt(n - 1);
}

double pow1(double a, double b, int b1){
	int k, n;
	double sn = 0, sk = 0;
	for(k = 0; k <= b1; k++){
		for(n = 1; n <= b1; n++){
			sn += pow(-1, n - 1) * pow(a - 1, n) / n;
		}
		sk += pow(b, k) * sn / fakt(k);
		sn = 0;
	}
	return sk;
}

int main(){
	int a, b, i;
	double k;
	printf("Unesite broj: ");
	scanf("%d", &a);
	fflush(stdin);
	printf("Unesite stepen: ");
	scanf("%d", &b);
	for(i = 1;i <= 50; i++) printf("i = %d	=>	pow1 = %f\n", i, pow1(a, b, i));
	k = pow(a, b);
	printf("pow = %f\n", k);
	return 0;
}
