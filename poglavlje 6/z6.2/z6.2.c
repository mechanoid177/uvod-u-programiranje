#include <stdio.h>

void uVelika(char *str){
    char *pok = str;
    while(*pok){
        if(65 <= *pok && *pok <= 90) *pok++ += 32;
        else if(97 <= *pok && *pok <= 122) *pok++ -= 32;
    }
}

int main(){
    char str[100];
    printf("Unesite string: ");
    gets(str);
    uVelika(str);
    printf("%s\n", str);
}
