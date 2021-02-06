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

void insertion_sort(int a[], int n){
    int i, j, value;
    for(i = 0; i < n; i++){
        value = a[i];
        for(j = i - 1; j >= 0 && a[j] > value; j--){
            a[j + 1] = a[j];
        }
        a[j + 1] = value;
    }
    ispisi_niz(a, n);
}

void main(){
    int n, a[MAX_SIZE];
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    insertion_sort(a, n);
}
