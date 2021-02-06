#include <stdio.h>

int fakt(int n){
    if(n <= 0) return 1;
    return n * fakt(n - 1);
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("fakt = %d\n", fakt(n));
}
