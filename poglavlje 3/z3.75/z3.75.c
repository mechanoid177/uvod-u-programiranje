#include <stdio.h>

int main(){
	int ch, pch;
	printf("Unesite tekst: \n");
	while((ch = getchar()) != '+'){
		if(ch == '\n' || ch == '\t' || ch == ' '){
			if(pch == '\n' || pch == '\t' || pch == ' '){
				printf("\n");
				continue;
			}
		} 
		putchar(ch);
		pch = ch;
	}
	return 0;
}
