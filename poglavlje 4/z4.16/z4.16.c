#include <stdio.h>

int toVelikoSlovo(int* ch,int* pch){
	if(*pch == '.' || *pch == '!' || *pch == '?'){
		if(*ch <= 'z' && *ch >= 'a'){
			*pch = *ch;
			*ch -= 32;
			return putchar(*ch); 
		}
	}
	
}

int main(){
	int ch, pch = '.';
	while((ch = getchar()) != '+') toVelikoSlovo(&ch, &pch);
	return 0;
}
