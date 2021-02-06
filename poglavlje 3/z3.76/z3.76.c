#include <stdio.h>

int main(){
	int ch, pch1, pch = '\t', i = 0;
	printf("Unesite tekst: \n");
	while((ch = getchar()) != '+'){
		if(pch == '\n' || pch == '\t' || pch == ' '){
			if(ch == '\n' || ch == '\t' || ch == ' ') continue;
			else{
				pch = pch1 = ch;
				continue;
			}
		}
		if((ch == '\n' || ch == '\t' || ch == ' ') && !(pch == '\n' || pch == '\t' || pch == ' ')){
			if(pch1 == pch){
				i++;
				pch = ch;
				continue;
			}
		}
		pch = ch;
	}
	printf("%d\n", i);
	return 0;
}