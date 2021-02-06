#include <stdio.h>

int main(){
    char *p;
    char s[100];
    printf("Unesite string: ");
    p = gets(s);
    printf("String u direktnom poretku - I nacin: ");
    printf("%s\n", s);
    printf("String u direktnom poretku - II nacin: ");
    while(*p) putchar(*p++);
    printf("\nString u inverznom poretku: ");
    while(--p >= s) putchar(*p);
    return 0;
}
