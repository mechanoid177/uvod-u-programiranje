#include<stdio.h>

main(){
    int vr1, vr2, m, i;
    printf("Unesite donju granicu: "); scanf("%d", &vr1);
    printf("Unesite gornju granicu: "); scanf("%d", &vr2);
    printf("Unesite korak "); scanf("%d", &m);
    printf("\n\n");
    printf("+--------+---------+\n");
    printf("|Celzijus|Farenhajt|\n");
    printf("+--------+---------+\n");
    for(i = vr1; i <= vr2; i += m){
        printf("|%8d|%4f|\n", i, 1.0 * (9 / 5) * i + 32);
        printf("+--------+---------+\n");
    }
}
