#include <stdio.h>

void prav(int a, int b){
	int i, j;
	for(i = 1; i <= a; i++){
		if(i == 1 || i == a){
			for(j = 1; j <= b; j++){
				printf("*");
			}
			printf("\n");
			continue;
		}
		printf("*");
		for(j = 1; j <= b - 2; j++) printf(" ");
		printf("*\n");
	}
}

int main(){
	int a, b;
	printf("Unesite str a: ");
	scanf("%d", &a);
	printf("Unesite str b: ");
	scanf("%d", &b);
	prav(a, b);
	return 0;
}