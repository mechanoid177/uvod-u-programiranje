#include <stdio.h>

int main(){
	int ch;
	printf("Unesite tekst: \n");
	while((ch = getchar()) != '+'){
		printf("%d\n", ch);		
	}
	return 0;
}
