#include<stdio.h>

main(){
    int d;
    printf("Unesite celobrojan trocifren broj: ");
    scanf("%d", &d);
    printf("Zbir cifara: %d\n", d/100+d%100/10+d%10);
    system("pause");
}
