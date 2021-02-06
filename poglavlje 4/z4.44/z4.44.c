#include <stdio.h>

int faktt(int n){
    if(n <= 1) return 1;
    return n * faktt(n - 2);
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("%d\n", faktt(2 * n));
}
