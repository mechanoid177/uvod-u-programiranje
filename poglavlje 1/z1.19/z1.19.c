#include<stdio.h>

main(){
    float c;
    int p;
    printf("Unesite cenu i popust: \n");
    scanf("%f\n%d", &c, &p);
    printf("Cena sa popustom iznosi: %.2f\n", c-c/100*p);
    system("pause");
}
