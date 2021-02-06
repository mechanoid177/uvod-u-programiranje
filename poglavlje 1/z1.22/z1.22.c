#include<stdio.h>

main(){
    float v1, v2, t;
    printf("Unesite brzinu prvog kamiona: ");
    scanf("%f", &v1);
    printf("Unesite brzinu drugog kamiona: ");
    scanf("%f", &v2);
    printf("Unesite vreme susreta kamiona: ");
    scanf("%f", &t);
    printf("Razdaljina izmedju pocetnih pozicija iznosi: %.3f\n", t*(v1+v2));
    system("pause");
}
