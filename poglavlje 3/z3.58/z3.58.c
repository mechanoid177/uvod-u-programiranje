#include<stdio.h>
#include<math.h>

main(){
    int n, cf, c, k = 1, i = 0;
    double nb;
    printf("Unesite broj: "); scanf("%d", &n);
    printf("Unesite cifru: "); scanf("%d", &cf);
    while(n != 0){
        c = n % 10;
        n /= 10;
        //printf("%d\n", n);
        if(k){
            if(c == cf){
                k = 0;
                continue;
            }
        }
        nb += c * pow(10, i);
        printf("%f\n", nb);
        i++;

    }
    printf("%f\n", nb);
}
