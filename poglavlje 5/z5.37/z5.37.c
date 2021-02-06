#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popuni_niz(double *a, int n){
    int i;
    srand(time(0));
    for(i = 0; i < n; i++){
        if(rand() % 2){
            *(a + i) = 1.0 * (rand() % 100 + 1) / (rand() % 100 + 1);
            continue;
        }
        *(a + i) = -1.0 * (rand() % 100 + 1) / (rand() % 100 + 1);
    }
}

void ispisi_niz(double *a, int n){
    int i;
    for(i = 0; i < n; i++) printf("%lf ", *(a + i));
    printf("\n");
}

void swap(double *a, double *b){
    *a -= *b;
    *b += *a;
    *a = *b - *a;
}

void sort(double *a, int n){
    int ponovo, i;
    do{
        ponovo = 0;
        for(i = 0; i < n; i++){
            if(*(a + i) > *(a + i + 1)){
                swap(a + i, a + i + 1);
                ponovo = 1;
            }
        }
    }while(ponovo);
}

void main(){
    double* a;
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (double*)malloc(n * sizeof(double));
    if(a == NULL){
        printf("Greska!!!\n");
        exit(101);
    }
    popuni_niz(a, n);
    ispisi_niz(a, n);
    sort(a, n);
    ispisi_niz(a, n);
    printf("Najsjanije zvezde: ");
    ispisi_niz(a, 4);
}
