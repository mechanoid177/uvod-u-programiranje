#include <stdio.h>

int minmax(int* a, int* b,int* c,int* d){
	int min, max;
	if(min > *a) min = *a;
	if(min > *b) min = *b;
	if(min > *c) min = *c;
	if(min > *d) min = *d; 
	if(max < *a) max = *a;
	if(max < *b) max = *b;
	if(max < *c) max = *c;
	if(max < *d) max = *d;
	return min + max;
}

int main()
{
	int a, b, c, d;
	printf("Unesite brojeve\n");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("zbir %d\n", minmax(&a, &b, &c, &d));
	return 0;
}
