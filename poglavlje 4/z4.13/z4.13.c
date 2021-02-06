#include <stdio.h>

int savrs(int n){
	int i, s = 0;
	for(i = 1; i <= n / 2; i++){
		if(n % i == 0) s += i;
	}
	return s == n;
}

int main(){
	int i, n;
	printf("Unesite broj: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(savrs(i)) printf("%d\n", i);
	}
	return 0;
}