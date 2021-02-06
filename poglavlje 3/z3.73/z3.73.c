#include <stdio.h>

int main(){
	int ch, v = 0, m = 0;
	printf("Unesite tekst:\n");
	while((ch = getchar()) != '+'){
		if(ch >= 65 && ch <= 90) v++;
		else if(ch >= 97 && ch <= 122) m++;
	}
	printf("Velikih slova ima %d, a malih %d\n", v, m);
	return 0;
}