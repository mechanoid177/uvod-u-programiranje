#include <stdio.h>
#include <math.h>

int prost(int n){
	int i;
	if(n <= 1) return 0;
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int goldbah(int n){
	int i;
	for(i = 2; i <= n; i++){
		if(prost(i) && prost(n - i)) return i;
	}
	
}

int main(){
	int m, n, i;
	printf("Unesite interval: ");
	scanf("%d%d", &m, &n);
	if(m < 3 || n < 3){
		printf("Pogresan unos\n");
		return 1;
	}
	if(m & 1) m += 1;
	for(i = m; i <= n; i += 2){
		printf("%d = %d + %d\n", i, goldbah(i), i - goldbah(i));
	}
	return 0;
}