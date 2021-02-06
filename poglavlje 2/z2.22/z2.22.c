#include <stdio.h>
#include <math.h>

main(){
    int v, t;
    char p;
    printf("Pol? (m/z) ");
    scanf("%c", &p);
    printf("Visina? ");
    scanf("%d", &v);
    printf("Tezina? ");
    scanf("%d", &t);
    switch(p){
        case 'm':
            if(v-100<t)
                printf("Smrsajte %d kg\n", t-v+100);
            else if (v-100>t)
                printf("Ugojite se %d kg\n", v-100-t);
            else
                printf("Idealna tezina\n");
            break;
        case 'z':
            if(v-110<t)
                printf("Smrsajte %d kg\n", t-v+110);
            else if (v-110>t)
                printf("Ugojite se %d kg\n", v-110-t);
            else
                printf("Idealna tezina\n");
            break;
        default:
            printf("Pogresan unos\n");
    }
    system("pause");
}
