#include <stdio.h>

int main(){
	int a, n;
	printf("Unesite broj: "); scanf("%d", &a);
	if(a & 1){
		printf("Neparan broj\n");
		return 1;
	}
	printf("Unesite stepen broja 2: "); scanf("%d", &n);
	if(a >> n == 1) printf("JESTE\n");
	else printf("NIJE\n");
	return 0;
}