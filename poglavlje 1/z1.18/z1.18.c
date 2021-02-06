#include<stdio.h>

main(){
    float tc;
    printf("Unesite temperaturu u celzijusima: ");
    scanf("%f", &tc);
    printf("Temperatura u farenhajtima iznosi: %f\n", (9*1.0/5)*tc+32);
    system("pause");
}
