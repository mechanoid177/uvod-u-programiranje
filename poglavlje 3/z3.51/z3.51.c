#include<stdio.h>
#include<math.h>

main(){
    int n, i = 0;
    double k;
    printf("Unesite broj: "); scanf("%d", &n);
    while(k < n){
        k = pow(3, i);
        i++;
        printf("%f\n", k);
    }
    printf("%f\n", k);
    printf("Broj %d %sje stepen broja 3.\n", n, (k == n) ? "" : "ni");
}
