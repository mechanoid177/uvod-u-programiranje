#include<stdio.h>

main(){
    float Tk;
    printf("Unesite temperaturu u kelvinima: \n");
    scanf("%f", &Tk);
    printf("Temperatura u celzijusima iznosi: %.3f\n", Tk-273.15);
    system("pause");
}
