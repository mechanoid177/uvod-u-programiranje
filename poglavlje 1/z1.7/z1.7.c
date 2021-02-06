#include<stdio.h>

main(){
    float s, t;
    printf("Unesite predjeni put i vreme:\n");
    scanf("%f\n%f", &s, &t);
    printf("Srednja brzina iznosi: %.3f\n", s/t);
    system("pause");
}
