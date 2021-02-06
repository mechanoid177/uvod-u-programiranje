#include<stdio.h>
#include<math.h>


main(){
    float epsi, x, x1 = 0, br;
    printf("Unesite broj: "); scanf("%f", &br);
    printf("Unesite tacnost: "); scanf("%f", &epsi);
    x = br;
    do{
        x1 = x;
        x = (x1 + br / x1) / 2;
    }
    while(fabs(x1 - x) > epsi);
    printf("Koren broja %f je %f\n", br, x1);

}
