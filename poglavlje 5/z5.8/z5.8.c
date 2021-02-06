#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_int(int *a, int *b, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. interval: ", i + 1);
        scanf("%d%d", a + i, b + i);
    }
}

void main(){
    int i, j = 0, n, a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE], C, min;
    printf("Unesite broj intervala: ");
    scanf("%d", &n);
    ucitaj_int(a, b, n);
    printf("Unesite tacku C: ");
    scanf("%d", &C);
    for(i = 0; i < n; i++){
        if(C > a[i] && C < b[i]){
            c[j] = i;
            if(min > (b[i] - a[i])) min = j;
            j++;
        }
    }
    printf("Najmanji interval koji sadrzi C = %d je (%d, %d)\n", C, a[c[min]], b[c[min]]);
}
