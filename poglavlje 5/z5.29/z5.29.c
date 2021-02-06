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

int prost(int a){
    int i;
    if(a <= 2) return 1;
    for(i = 3; i <= sqrt(a); i++){
        if(a % i == 0) return 0;
    }
    return 1;
}

void aritm(int *a, int n){
    int i, k = 0, j = 0;
    double s1 = 0, s2 = 0;
    for(i = 0; i < n; i++){
        if(*(a + i) % 2 == 0){
            s1 += *(a + i);
            k++;
        }
        if(prost(*(a + i))){
            s2 += *(a + i);
            j++;
        }
    }
    printf("Aritmeticka sredina parnih clanova: %lf\n", s1 / k);
    printf("Aritmeticka sredina prostih clanova: %lf\n", s2 / j);
}

void main(){
    int* a;
    int n;
    printf("Unesite duzinu niza: ");
    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Greska!!!\n");
        exit(101);
    }
    popuni_niz(a, n);
    ispisi_niz(a, n);
    printf("\n");
    aritm(a, n);
}
