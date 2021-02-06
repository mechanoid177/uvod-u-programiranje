#include <stdio.h>

char *izbaci(char *s1, char *s2){
    while(*s1){
            if(*s1 == '('){
                printf("uslo\n");
                while(*s1 != ')') s1++;
                s1++;
            }
            else *s2++ = *s1++;
    }
    *s2 = '\0';
    return s2;
}

int main(){
    char s1[100], s2[100];
    printf("Unesite string: ");
    gets(s1);
    izbaci(s1, s2);
    puts(s2);
}
