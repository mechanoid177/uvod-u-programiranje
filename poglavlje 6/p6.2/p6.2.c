#include <stdio.h>

char *vrati_pok(char *s, char c){
    char *p = s;
    while(*p)
        if(*p++ == c) return --p;
    return NULL;
}

int main(){
    char s[10], c;
    char *p;
    printf("Unesite string: ");
    gets(s);
    printf("Unesite karakter koji trazite: ");
    fflush(stdin);
    scanf("%c", &c);
    p = vrati_pok(s, c);
    printf("Ostatak stringa od te pozicije je: %s\n", (p == NULL) ? "Nema rezaltata" : p);
    printf("Pokazivac na prvo pojavljivanje karaktera: %d\n", p);
    return 0;
}
