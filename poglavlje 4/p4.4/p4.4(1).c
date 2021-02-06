#include <stdio.h>
#include <math.h>


int prost(int n){
	int i;
	if(i & 1) return 1;
	for(i = 2; i <= sqrt(n); i++){
		if((n % i) == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int i, n;
	printf("Unesite broj: "); scanf("%d", &n);
	for(i = 2; i <= n; i++){
		if(prost(i) == 1) printf("%d\n", i);
	}
	return 0;
}
