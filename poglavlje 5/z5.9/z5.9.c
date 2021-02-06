#include <stdio.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Unesite %d. element niza: ", i + 1);
        scanf("%d", a + i);
    }
}

void swap(int *a, int *b){
    int pom = *a;
    *a = *b;
    *b = pom;
}

void ispisi_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
}
void main(){
    int i, j, n, a[MAX_SIZE];
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    i = 0;
    j = n - 1;
    while(1){
        while((a[i] % 2 == 0) && (i < j)) i++;
        while((a[j] % 2) && j > i) j--;
        if(i < j) swap(&a[i], &a[j]);
        else break;
    }
    ispisi_niz(a, n);
}
