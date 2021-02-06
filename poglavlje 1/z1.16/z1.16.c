#include<stdio.h>

main(){
    float kg;
    printf("Unesite tezinu u kilogramima: ");
    scanf("%f", &kg);
    printf("Ista tezina u funtama: %.3f\n", kg*2.2);
    system("pause");
}
