#include <stdio.h>
#include <string.h>

void brisi(char *str, char *str2){
    int n = strlen(str), i, x = 0;
    for(i = 0; i < n; i++){
        str[i - x] = str[i];
        if(strchr(str2, str[i]))
            x++;
    }
    str[i - x] = '\0';
}

int main(){
    char s1[100], s2[100];
    printf("Unesite string: ");
    gets(s1);
    printf("Unesite drugi string: ");
    gets(s2);
    brisi(s1, s2);
    printf("%s", s1);
    return 0;
}
