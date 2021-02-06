#include <stdio.h>

double raz_iter(int n){
    int i;
    double raz = 1.0;
    while(n){
        raz = n + 1 / raz;
        n--;
    }
    return raz;
}

double raz_rek(int i, int n){
    if(i > n) return 1;
    return i + 1 / raz_rek(i + 1, n);
}

main(){
    int n;
    printf("Unesite dubinu: ");
    scanf("%d", &n);
    printf("iter = %lf\n", raz_iter(n));
    printf("rek = %lf\n", raz_rek(1, n));
}
