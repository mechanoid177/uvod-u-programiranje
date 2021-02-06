#include <stdio.h>

void izbrisiKarakter(char *str, char c){
    char *s = str;
    while(*s){
        if(*s != c) *str++ = *s;
        s++;
    }
    *str = '\0';
}

int main(){
    char str[100], c;
    printf("Unesite string: ");
    gets(str);
    printf("Unesite karakter koji zelite da obrisete: ");
    c = getchar();
    izbrisiKarakter(str, c);
    printf("String bez karaktera: %s\n", str);
    return 0;
}
