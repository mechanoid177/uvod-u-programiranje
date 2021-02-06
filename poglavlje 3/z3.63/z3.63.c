#include <stdio.h>
#include <math.h>

int main()
{
	int  i = 1;
	float s = 0, r, e;
	printf("Unesite zeljenu tacnost: "); 
	scanf("%f", &e);
	r = e + 1;
	printf("%f\n", r);
	while(e <= r){
		s += (float)pow(-1, i - 1) / (i * i);	
		r = fabs(s - (float)pow(M_PI, 2) / 12);
		printf("%f\n", r);
		i++;
	}
	printf("%d\n", i - 1);
	return 0;
}
