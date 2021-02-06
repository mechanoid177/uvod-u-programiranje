#include <stdio.h>

double raz_iter(int n){
    int i;
    double raz = 1.0;
    for(i = 1; i <= n; i++){
        raz = 1 + i / raz;
    }
    return raz;
}

double raz_rek(int n){
    if(n == 0) return 1;
    return 1 + n / raz_rek(n - 1);
}

main(){
    int n;
    printf("Unesite dubinu: ");
    scanf("%d", &n);
    printf("iter = %lf\n", raz_iter(n));
    printf("rek = %lf\n", raz_rek(n));
}
