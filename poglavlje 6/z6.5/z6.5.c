#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int del1(char *str, int d, int poz){
    if(poz + d > strlen(str)){
        printf("Uneti pozicija i broj znakova prevazilazi duzinu stringa!!!\n");
        return 0;
    }
    char *p = str + poz, *q = str + poz + d;
    while(*q) *p++ = *q++;
    *p = '\0';
    return 1;
}


int del2(char *str, int d, int poz){
    if(poz + d > strlen(str)){
        printf("Uneti pozicija i broj znakova prevazilazi duzinu stringa!!!\n");
        return 0;
    }
    strcpy(str + poz, str);
    return 1;
}

int main(){
    char str[100];
    int poz, d;
    printf("Unesite string: ");
    gets(str);
    printf("Unesite poziciju i broj znakova za brisanje: ");
    scanf("%d%d", &poz, &d);
    del1(str, poz, d);
    printf("Novi string: %s\n", str);
    return 1;
}
