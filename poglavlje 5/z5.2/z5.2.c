#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%d", (a + i));
    }
}

void ispisi_niz(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

main(){
    int n, p, i, a[MAX_SIZE], b[MAX_SIZE], k = 0;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    printf("Unesite broj: ");
    scanf("%d", &p);
    for(i = 0; i < n; i++){
        if((a[i] > p) &&  (a[i] % 2 == 0)){
            b[k] = a[i];
            k++;
        }
    }
    ispisi_niz(b, k);
}
