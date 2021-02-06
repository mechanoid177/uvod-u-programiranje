#include<stdio.h>

main(){
    int i, n;
    printf("Unesite gornju granicu intervala: "); scanf("%d", &n);
    printf(" ---------- ------------\n");
    printf("|VREDNOST X|VREDNOST X^3|\n");
    printf(" ---------- ------------\n");
    for(i=2; i<=n; i+=2)
        printf("|%10d|%12d|\n ---------- ------------\n", i, i*i*i);
    return 0;
}
