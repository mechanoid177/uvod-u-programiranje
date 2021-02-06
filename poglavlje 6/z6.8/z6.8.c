#include <stdio.h>
#include <string.h>

void cesar(char *s, int k){
    char *p = s;
    while(*p){
        if(('a' <= *p && *p <= 'z') || ('A' <= *p && *p <= 'Z')) *p = *p + k;
        p++;
    }
}

int main(){
    char s[100];
    int k;
    printf("Unesite string: ");
    gets(s);
    printf("Unesite kljuc: ");
    scanf("%d", &k);
    puts("1");
    cesar(s, k);
    puts(s);
    return 0;
}
