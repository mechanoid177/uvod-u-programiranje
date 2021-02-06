#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%d", a + i);
    }
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
}

int zam_cif(int a){
    int ost, i = 0, nbr = 0;
    while(a){
        ost = a % 10;
        nbr = 10 * nbr + ost;
        a /= 10;
        i++;
    }
    return nbr;
}

void main(){
    int n, i, a[MAX_SIZE];
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    for(i = 0; i < n; i++){
        a[i] = zam_cif(a[i]);
    }
    ispisi_niz(a, n);
}
