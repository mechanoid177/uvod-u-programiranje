#include<stdio.h>
#include<math.h>

main(){
    int i, n, a = 0;
    printf("Unesite broj: "); scanf("%d", &n);
    for(i = 1; i <= sqrt(n); i++){
        if((n % i == 0) && (i != 1)){
            printf("Broj %d nije prost broj.\n", n);
            a = 1;
            break;
        }
    }
    printf("Broj %d %s prost broj\n", n, (a == 0) ? "je" : "nije");
}
