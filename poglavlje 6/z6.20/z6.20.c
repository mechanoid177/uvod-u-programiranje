#include <stdio.h>

void reci(char *s){
    while(*s){
        if(*s == ' '){
            putchar('\n');
            s++;
        }
        else putchar(*s++);
    }
}

int main(){
    char s[100];
    printf("Unesite string: ");
    gets(s);
    reci(s);
    return 0;
}
