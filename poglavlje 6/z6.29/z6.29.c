#include <stdio.h>
#include <string.h>

int strlen1(char *str){
    int i = 0;
    while(*str) i++, str++;
    return i;
}

int main(){
    char str[100];
    int k;
    printf("Unesite string: ");
    gets(str);
    k = strlen1(str);
    printf("d = %d\n", k);
    return 0;
}
