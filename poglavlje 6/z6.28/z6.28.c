#include <stdio.h>

void praz_inter(char *str, int *p){
    while(*str){
        if(*str == ' ' || *str == '\t') p[0]++;
        if(*str == '.' || *str == ',') p[1]++;
        str++;
    }
}

int main(){
    char str[100];
    int p[] = {0, 0};
    char *pok;
    printf("Unesite string: ");
    pok = gets(str);
    praz_inter(pok, p);
    printf("Praznine: %d\nInterpukcija: %d\n", p[0], p[1]);
    return 0;
}
