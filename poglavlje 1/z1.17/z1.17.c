#include<stdio.h>

main(){
    float cm;
    printf("Unesite centrimetre: ");
    scanf("%f", &cm);
    printf("%.3fcm iznosi %fkm\n", cm, cm*0.00001);
    system("pause");
}
