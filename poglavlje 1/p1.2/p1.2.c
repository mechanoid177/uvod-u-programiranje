#include<stdio.h>

main(){
    float st;
    printf("Unesite duzinu u stopama: ");
    scanf("%f", &st);
    printf("Duzina u centrimetrima: %.4f\n", st*30.48);
    system("pause");
}
