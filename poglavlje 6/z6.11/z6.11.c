#include <stdio.h>

int palindrom(char *s){
    char *p = s;
    int i;
    for(i = 0; *p != '\0'; i++){
        if(*p != ' ') *s++ = *p;
        p++;
    }
    *s = '\0';
    char *q = p - i;
    while(*s)
        if(*s++ != *q--) return 0;
    return 1;
}

int main(){
    char s[100];
    gets(s);

    printf("%d\n", palindrom(s));
    return 0;
}
