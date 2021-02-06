#include <stdio.h>

#define MAX_SIZE 15

void ucitaj_niz(int *niz, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element: ", i + 1);
        scanf("%d", (niz + i));
    }
}

float prosek(int niz[], int n){
    int i, s = 0;
    for(i = 0; i < n; s += niz[i], i++);
    return (float)s / n;
}

void ispisi_niz(float niz[],int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%.3f ", niz[i]);
    }
}
main(){
    int i, n, niz[MAX_SIZE];
    float pr[4];
    for(i = 0; i < 4; i++){
        printf("Unesite broj predmeta na %d. godini: ", i + 1);
        scanf("%d", &n);
        ucitaj_niz(niz, n);
        pr[i] = prosek(niz, n);
    }
    ispisi_niz(pr, 4);
}
