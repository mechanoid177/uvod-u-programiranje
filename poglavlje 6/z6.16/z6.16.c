#include <stdio.h>

int xstrcmp(char *s1, char *s2){
    for(; *s1 == *s2; s1++, s2++)
        if(*s1 == '\0') return 0;
    return *s1 - *s2;
}

int main(){
    char s1[100], s2[100];
    int rez;
    printf("Unesite prvi string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    rez = xstrcmp(s1, s2);
    if(rez == 0) printf("Stringovi su isti\n");
    else if (rez > 0) printf("Prvi string je veci\n");
    else printf("Drugi string je veci\n");
    return 0;
}
