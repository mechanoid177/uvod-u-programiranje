#include <stdio.h>

int main(){
	int ch, min = 57, max = 0;
	printf("Unesite broj: \n");
	while((ch = getchar()) != '\n'){
		if(ch > max) max = ch;
		if(ch < min) min = ch;
	}
	printf("Minimum je: %c, a maksimum: %c\n", min, max);
	return 0;
}
