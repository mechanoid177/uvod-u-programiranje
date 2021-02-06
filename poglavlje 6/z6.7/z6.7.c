#include <stdio.h>
#include <string.h>

void zamena1(char *s, char *str1, char *str2){
    char buffer[100], *p = s;
    int str1l = strlen(str1), str2l = strlen(str2);
    while((p = strstr(p, str1)) != NULL){
        strcpy(buffer, p + str1l);
        strcpy(p, str2);
        strcpy(p + str2l, buffer);
        p += str2l;
    }
}

void zamena(char *str, char *str1, char *sSta, char *sCim){
    char *p = str, *e;
    int nsta = strlen(sSta);
    str1[0] = '\0';
    while((e = strstr(p, sSta)) != NULL){
        strncat(str1, p, e - p);
        strcat(str1, sCim);
        p = e + nsta;
    }
    strcat(str1, p);
}

int main(){
    char s[100], str1[100], str2[100], rez[100];
    printf("Unesite string s: ");
    gets(s);
    printf("Unesite string str1: ");
    gets(str1);
    printf("Unesite string str2: ");
    gets(str2);
    printf("Funkcija zamena: ");
    zamena(s, rez, str1, str2);
    puts(rez);
    printf("Funkcija zamena1: ");
    zamena1(s, str1, str2);
    puts(s);
    return 0;
}
