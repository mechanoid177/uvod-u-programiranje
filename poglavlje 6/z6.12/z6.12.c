#include <stdio.h>
#include <string.h>

void ispisi_n_slova(char *s, int n){
    int i;
    for(i = 0; i < n; i++)
        putchar(s[i]);
    putchar('\n');
}

void ispisi_podstringove(char *s){
    int i, j, n = strlen(s);
    for(i = 0; i < n; i++)
        for(j = i; j < n; j++)
            ispisi_n_slova(&s[i], j - i + 1);
}

int main(){
    char s[100];
    printf("Unesite string: ");
    gets(s);
    ispisi_podstringove(s);
    return 0;
}
