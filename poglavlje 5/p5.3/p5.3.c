#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. clan niza: ", i + 1);
        scanf("%d", (a + i));
    }
}

void ispisi_niz(int a[], int n){
    int i = 0;
    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

void main(){
    int n, i, j = 0, k = 0, a[MAX_SIZE], b[MAX_SIZE], c[MAX_SIZE];
    printf("Unesite dimenziju niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        if(a[i] & 1){
            c[j] = a[i];
            j++;
            continue;
        }
        b[k] = a[i];
        k++;
    }
    printf("b = { ");
    ispisi_niz(b, k);
    printf("}\nc = { ");
    ispisi_niz(c, j);
    printf("}");
}
