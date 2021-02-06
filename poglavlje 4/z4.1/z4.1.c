#include <stdio.h>

int suma(int n){
	if(n ==  0) return 0; 
	return n + suma(n - 1); 
}

int main(){
	int n, i, s = 0;
	printf("Unesite broj:"); 
	scanf("%d", &n);
	printf("%d\n", suma(n));
	for(i = 1; i <= n; i++) s += i;
	printf("%d\n", s);
}
