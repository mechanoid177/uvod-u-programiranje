#include <stdio.h>

double raz_iter(int n){
    int i;
    double raz = 1;
    for(i = n; i >= 1; i--){
        raz = i / raz + 1;
    }
    return raz;
}

double raz_rek(int i, int n){
    if(n <= 0) return 1;
    return i / raz_rek(i + 1, n - 1) + 1;
}

main(){
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    printf("iter = %lf\n", raz_iter(n));
    printf("rek = %lf\n", raz_rek(1, n));
}
