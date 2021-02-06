#include <stdio.h>
#include <string.h>

int poz1(char *s1, char *s2){
    if(strstr(s1, s2) == NULL) return -1;
    return strstr(s1, s2) - s1;
}

int poz2(char *s1, char *s2){
    char *p = s1, *q = s2;
    while(*p){
        if(*p == *q) q++;
        else q = s2;
        if(*q == '\0')
            return p - s1 - (q - s2) + 1;
        p++;
    }
    return -1;
}

int main(){
    char s1[100], s2[100];
    printf("Unesite prvi string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    printf("Pozicija pomocu poz1: %d\n", poz1(s1, s2));
    printf("Pozicija pomocu poz2: %d\n", poz2(s1, s2));
    return 0;
}
