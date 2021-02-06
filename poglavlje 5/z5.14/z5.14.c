#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element: ", i + 1);
        scanf("%d", a + i);
    }
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
}

int provera(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        if(a[i] == a[i + 1]) return 0;
    }
    return 1;
}

void main(){
    int n, a[MAX_SIZE];
    printf("Unesite dimenziju niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    printf("Svi susedni clanovi %s razliciti.\n", provera(a, n) ? "su" : "nisu");
}
