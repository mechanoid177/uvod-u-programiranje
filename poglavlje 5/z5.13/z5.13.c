#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element: ", i + 1);
        scanf("%d", (a + i));
    }
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
}

void main(){
    int n, i, j = 0, k = 0, a[MAX_SIZE];
    printf("Unesite dimenziju niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        if((a[i] > 0 && (j < 0 || j == 0)) || (a[i] < 0 && (j > 0 || j == 0))) k++;
        j = a[i];
    }
    printf("Broj promena znaka: %d\n", k);
}
