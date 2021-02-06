#include <stdio.h>

void xgets(char *s){
    char c;
    while((c = getchar()) != '\n')
        *s++ = c;
    *s = '\0';
}

int main(){
    char s[100];
    printf("Unesite string: ");
    xgets(s);
    printf("%s\n", s);
}
