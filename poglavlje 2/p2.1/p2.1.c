#include<stdio.h>

main(){
    int a, b;
    printf("Unesite dva broja: ");
    scanf("%d\n%d", &a, &b);
    printf("Veci broj je: %d\n", a<b ? b : a);
    system("pause");
}

