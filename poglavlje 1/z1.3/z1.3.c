#include<stdio.h>

main(){
    float dk, se;
    printf("Unesite dnevni kurs evra: ");
    scanf("%f", &dk);
    printf("Unesite sumu u evrima koje treba da pretvorite: ");
    scanf("%f", &se);
    printf("Suma u dinarima iznosi: %5f\n", se*dk);
    system("pause");
}
