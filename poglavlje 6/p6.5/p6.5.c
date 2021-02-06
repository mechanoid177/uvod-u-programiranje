#include <stdio.h>

int main(){
    char s1[100], s2[100], s3[100];
    char *p1, *p2, *p3 = s3;
    printf("Unesite prvi string: ");
    p1 = gets(s1);
    printf("Unesite drugi string: ");
    p2 = gets(s2);
    while(*p1) *(p3++) = *(p1++);
    while(*p2) *p3++ = *p2++;
    *p3 = '\0';
    printf("%s\n", s3);
}
