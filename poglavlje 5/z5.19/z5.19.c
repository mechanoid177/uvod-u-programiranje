#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void ucitaj_niz(int *a, int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Uneste %d. clan: ", i + 1);
        scanf("%d", a + i);
    }
}

void redosled(int *a, int n){
    int i, j = 0, k = 0;
    for(i = 0; i < n - 1; i++){
        if(a[i] <= a[i + 1]) j++;
        if(a[i] >= a[i + 1]) k++;
    }
    if((j != (n - 1)) && (k != (n - 1))){
        printf("Niz nije sortiran.\n");
        exit(0);
    }
    printf("Niz %s sortiran\n", (j == (n - 1)) ? "uzlazno" : "silazno");
}

void main(){
    int n, a[MAX_SIZE];
    printf("Unesite broj clanova niza: ");
    scanf("%d", &n);
    ucitaj_niz(a, n);
    redosled(a, n);
}
