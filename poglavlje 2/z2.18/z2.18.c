#include <stdio.h>

main(){
    int v;
    char p;
    printf("Pol? (m/z) ");
    scanf("%c", &p);
    if(p!='m' && p!='z')
        printf("Pogresan unos\n");
    else{
        printf("Visina u cm: ");
        scanf("%d", &v);
        printf("Vasa idealna tezina iznosi: %d kg\n", p=='m' ? v-100 : v-110);
    }
    system("pause");
}
