#include <stdio.h>
#include <math.h>

int prost(int n){
	int i;
	if(n == 1) return 0;
	for(i = 2; i <= sqrt(n) ; i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int blizanci(int n){
	return prost(n) && prost(n + 2);
}

int main(){
	int a, i;
	printf("Unesite do kog broja proveravamo: ");
	scanf("%d", &a);
	for(i = 2; i <= a - 2; i++){
		if(blizanci(i)) printf("%d %d\n", i, i + 2);
	}
	return 0;
}