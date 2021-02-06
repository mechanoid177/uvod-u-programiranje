#include <stdio.h>
#include <math.h>

int prost(int a){
	int i;
	if(a <= 1) return 0;
	for(i = 2; i <= sqrt(a); i++){
		if(a % i == 0) return 0;	
	}
	return 1;
}

int main(){
	int n, i = 1;
	printf("Unesite broj: ");
	scanf("%d", &n);
	while(!(prost(n + i) || prost(n - i))) i++;
	if(prost(n + i) && prost(n - i)) printf("%d %d\n", n - i, n + i);
	else if(prost(n - 1)) printf("%d\n", n - i);
	else if(prost(n + 1)) printf("%d\n", n + i);
	return 0;
}
