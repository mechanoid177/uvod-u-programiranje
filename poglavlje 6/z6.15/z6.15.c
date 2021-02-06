#include <stdio.h>

char *xstrncat(char *s1, char *s2, int n){
    while(*s1) s1++;
    while(*s2 && n--){
        *s1++ = *s2++;
    }
    *s1 = '\0';
    return s1;
}

int main(){
    char s1[200], s2[100];
    int n;
    printf("Unesite prvi string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    printf("Unesite koliko karaktera dodajete: ");
    scanf("%d", &n);
    xstrncat(s1, s2, n);
    printf("%s\n", s1);
}
