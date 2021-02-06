#include <stdio.h>

int main()
{
	unsigned o, uo = 0, i = 0;
	while(o != 0){
		printf("Unesite ocenu: "); scanf("%d" , &o);
		uo += o;
		i++;
		fflush(stdin);
	}
	printf("Prosecna ocena: %f\n", 1.0 * uo / (i - 1));
	return 0;
}
