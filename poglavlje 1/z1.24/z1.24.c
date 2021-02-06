#include<stdio.h>

main(){
    char vs;
    printf("Unesite veliko slovo: ");
    scanf("%c", &vs);
    printf("Malo slovo: %c\n", vs+'a'-'A');
    system("pause");
}
