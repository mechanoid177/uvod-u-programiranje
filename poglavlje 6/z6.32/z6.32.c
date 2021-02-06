#include <stdio.h>

void izbaci(char *s){
    char *p = s;
    while(*p){
        if(* == '/' && *p == '/')
            while(*p != '\n') p++;
        else *s++ = *p++;
    }
    *s = '\0';
}

int main(){
    char s[100];
    printf("Unesite string:\n");
    gets(s);
    izbaci(s);
    puts(s);
    return 0;
}
