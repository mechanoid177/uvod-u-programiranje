#include <stdio.h>
#include <math.h>

void dn(int dan, int mes, int god){
	int a, y, m, JDN;
	a = (14 - mes) / 12;
	printf("a(mes = %d) = %d\n", mes, a);
	y = god + 4800 - a;
	printf("y = %d\n", y);
	m = mes + 12 * a - 3;
	printf("m = %d\n", m);
	JDN = dan + (153 * m + 2) / 2 + 365 * y + y / 4 - y / 100 + y / 400 - 32045;
	printf("JDN = %d\n", JDN);
	printf("Redni broj dana u nedelji je: %d\n", (JDN % 7) + 2);
}

int main(){
	int dan, mes, god;
	printf("Unesite datum: ");
	scanf("%d%d%d", &dan, &mes, &god);
	dn(dan, mes, god);
	return 0;
}
