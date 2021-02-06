#include <stdio.h>
#include <math.h>

int prost(int n){
	int i;
	if(n == 1) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int emirp(int n){
	int br, ost, nbr = 0;
	if(!(prost(n))) return 0;
	while(br){
		ost = br % 10;
		nbr = 10 * nbr + ost;
		br /= 10;
	}
	return prost(nbr);
}

int main(){
	int n, i;
	printf("Unesite broj: ");
	scanf("%d", &n);
	for(i = 12; i <= n; i++){
		if(emirp(i)) printf("%d\n", i);
	}
	return 0;
}

