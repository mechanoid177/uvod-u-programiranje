#include <stdio.h>
 
int main(){
	unsigned i, j, n;
	printf("Unesite broj redova: "); scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if(i == 1 || i == n){
			for(j = 1; j <= n; j++){
				printf("*");
			}
		}
		else if(i == 2 || i == n - 1){
			printf("*");
		 	for(j = 1; j <= n - 2; j++){
		 		printf(" ");
		 	}
		 	printf("*");
		}
		else{
			printf("* ");
			for(j = 1; j <= n - 4; j++){
				printf("*");
			}
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}
