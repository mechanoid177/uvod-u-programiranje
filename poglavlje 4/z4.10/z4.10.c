#include <stdio.h>

int euklid_rek(int a, int b){
	if(a == b) return a;
	if(a > b) return euklid_rek(a - b, b);
	if(a < b) return euklid_rek(b - a, a);
}

int euklid_iter(int a, int b){
	while(a != b){
		if(a < b) b -= a;
		if(b < a) a -= b; 
	}
	return a;
}



int main(){
	int a, b;
	printf("Unesite brojeve: ");
	scanf("%d%d", &a, &b);
	printf("NZD(rek) = %d\n", euklid_rek(a, b));
	printf("NZD(iter) = %d\n", euklid_iter(a, b));
	return 0;
}
