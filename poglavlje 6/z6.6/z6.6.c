#include <stdio.h>
#include <string.h>

void pozPojavljivanja(char *s1, char *s2){
    char *p = s1 - 1;
    while((p = strstr(p + 1, s2)) > 0){
        printf("Pozicija: %d\n", p - s1);
    }
}

int main(){
    char s1[100], s2[100];
    printf("Unesite string s1: ");
    gets(s1);
    printf("Unesite string s2: ");
    gets(s2);
    pozPojavljivanja(s1, s2);
    return 0;
}
