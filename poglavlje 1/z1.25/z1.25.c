#include<stdio.h>

main(){
    int br;
    printf("Unesite petocifren broj: ");
    scanf("%d", &br);
    printf("Razlika prve i poslednje cifre: %d\n", br/10000-br%10);
    system("pause");
}

