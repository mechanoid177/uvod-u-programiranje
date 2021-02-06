#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. clan niza: ", i + 1);
        scanf("%d", (a + i));
    }
}

void main(){
    int n, i, k = 0, a[MAX_SIZE];
    printf("Unesite dimenziju niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    int max = a[0];
    for(i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
            k = i;
        }
    }
    printf("Najveci clan je %d sa indeksom %d.\n", max, k);
}
