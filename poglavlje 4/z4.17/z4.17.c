#include <stdio.h>

int fibRek(int n){
	if(n == 1 || n == 2) return 1;
	return fibRek(n - 1) + fibRek(n - 2);
}

int fibIter(int n){
	int i, s = 1;
	for(i = 1; i <= n; i++){
		s += s;			
	}
	return s;
}

int main(){
	int n = 4;
	printf("%d\n%d\n", fibRek(n), fibIter(n));
	return 0;
}
