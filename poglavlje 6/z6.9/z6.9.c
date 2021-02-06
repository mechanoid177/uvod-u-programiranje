#include <stdio.h>

int max_rec(char *s){
    char *p = s, c = ' ';
    int adr = p, adr1, max = 0;
    do{
        if(*p == ' ' || *p == '\t' || *p == '\n'){
            adr1 = p;
            if(adr1 - adr > max) max = adr1 - adr;
            printf("max = %d\n", max);
            adr = adr1;
        }
    }while(*p++);
    return max;
}

int main(){
    char s[100];
    printf("Unesite string: ");
    gets(s);
    printf("Najveca rec je duzine: %d\n", max_rec(s));
}
