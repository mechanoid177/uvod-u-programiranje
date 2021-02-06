#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void popuni_niz(int *a, int n){
    int i;
    srand(time(0));
    for(i = 0; i < n; i++) *(a + i) = rand() % 100 + 1;
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++) printf("%d ", *(a + i));
}

void swap(int *a, int *b){
    *a -= *b;
    *b += *a;
    *a = *b - *a;
}

void sort(int *a, int n){
    int i, ponovo;
    do{
        ponovo = 0;
        for(i = 0; i < n; i++){
            if(*(a + i) > *(a + i + 1)){
                swap((a + i), (a + i + 1));
                ponovo = 1;
            }
        }
    }while(ponovo);
}

int prost(int a){
    int i;
    if(a <= 2) return 1;
    for(i = 2; i <= sqrt(a); i++){
        if(a % i == 0) return 0;
    }
    return 1;
}

int vadjenje(int *a, int *b, int n){
    int i, k = 0;
    for(i = 0; i < n; i++){
        if(prost(*(a + i))) *(b + k++) = *(a + i);
    }
    return k;
}

void main(){
    int* a;
    int* b;
    int n, k;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    b = a = (int*)malloc(n * sizeof(int));
    if(a == NULL || b == NULL){
        printf("Greska!!!\n");
        exit(101);
    }
    popuni_niz(a, n);
    ispisi_niz(a, n);
    printf("\n");
    k = vadjenje(a, b, n);
    ispisi_niz(b, k);
}
