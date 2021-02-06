#include <stdio.h>

int main(){
	int ch, pch = 0;
	printf("Unesite broj: ");
	while((ch = getchar()) != '\n'){
		if(ch > 47 && ch < 58) ch -= 48;
		else if(ch > 96 && ch < 103) ch -= 97;
		pch += ch;
		printf("%d\n", ch);
	}
	return 0;
}
