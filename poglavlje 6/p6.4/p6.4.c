#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void sort_str(char *niz_str[], int *n){
    int i, j;
    for(i = 0; i < *n - 1; i++)
        for(j = i + 1; j < *n; j++)
            if(strcmpi(niz_str[i], niz_str[j]) > 0){
                char *tmp = niz_str[i];
                niz_str[i] = niz_str[j];
                niz_str[j] = tmp;
            }
}

int main(){
    char niz_str[MAX_SIZE][MAX_SIZE];
    char *p[MAX_SIZE];
    int n, i;
    do{
        printf("Koliko stringova unosite? ");
        scanf("%d", &n);
        if(n > MAX_SIZE) printf("Unesite manji broj!\n");
    }while(n > MAX_SIZE);
    fflush(stdin);
    for(i = 0; i < n; i++){
        printf("Unesite %d. string: ", i + 1);
        gets(niz_str[i]);
        p[i] = niz_str[i];
    }
    sort_str(p, &n);
    for(i = 0; i < n; i++) puts(niz_str[i]);
    return 0;
}
