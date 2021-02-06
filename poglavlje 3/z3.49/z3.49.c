#include<stdio.h>
#include<math.h>

main(){
    int a, n;
    printf("Unesite broj: "); scanf("%d", &a);
    printf("Unesite eksponent: "); scanf("%d", &n);
    printf("%d ^ %d = %.0f\n", a, n, pow(a, n));
}
