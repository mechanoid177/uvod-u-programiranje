#include <stdio.h>

void sifra(char *s1, char *s2, char *s3){
    char *p = s1, *q = s2;
    while(*p){
        *s3++ = *p++;
        *s3++ = *q++;
    }
    *s3 = '\0';
}

int main(){
    char s1[100], s2[100], s3[200];
    printf("Unesite prvi string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    sifra(s1, s2, s3);
    printf("%s\n", s3);
    return 0;
}
