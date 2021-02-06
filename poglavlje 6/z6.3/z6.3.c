#include <stdio.h>

void uMala(char *str){
    char *p = str;
    while(*p){
        if(65 <= *p && *p <= 90) *p++ += 32;
        p++;
    }
}

int main(){
    char str[100];
    int i, brSlova[26];
    char *pok = str;
    for(i = 0; i < 26; i++) brSlova[i] = 0;
    printf("Unesite string: ");
    gets(str);
    uMala(str);
    while(*pok){
        if(97 <= *pok && *pok <= 122) brSlova[*pok - 97]++;
        pok++;
    }
    puts(str);
    for(i = 0; i < 26; i++)
        if(brSlova[i] != 0)
            printf("Slovo %c se pojavljuje %d puta\n", i + 97, brSlova[i]);
}
