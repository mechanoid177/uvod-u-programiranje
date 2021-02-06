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
    int i, j = 0, k = 0, a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE], n;
    printf("Unesite broj elemenata niza a: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        if(i % 2 == 0){
            b[j] = a[i];
            j++;
            continue;
        }
        c[k] = a[i];
        k++;
    }
    printf("b = { ");
    ispisi_niz(b, j);
    printf("}\nc = { ");
    ispisi_niz(c, k);
    printf("}\n");
}
