#include <stdio.h>

#define MAX_SIZE 100

int main(){
    int i, n, s = 0, a[MAX_SIZE];
    printf("Uesite dimenziju niza: ");
    scanf("%d", &n);
    if(n < 0 || n > MAX_SIZE){
        printf("Pogresan unos");
        return 1;
    }
    for(i = 0; i < n; i++){
        printf("Unesite %d. clan niza: ", i + 1);
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("Srednja vrednost niza je %f\n", (float)s / n);
    return 0;
}
