#include <stdio.h>

#define MAX_SIZE 100

void izbaci_praznine(char *s, char *rez){
    while(*s){
        if(*s == ' ' || *s == '\t') s++;
        else *(rez++) = *(s++);
    }
    *rez = '\0';
}

int main(){
    char s[MAX_SIZE], rez[MAX_SIZE];
    printf("Unesite string: ");
    if(gets(s) == NULL) return 1;
    izbaci_praznine(s, rez);
    printf("%s\n", rez);
    printf("%s\n", s);
}
