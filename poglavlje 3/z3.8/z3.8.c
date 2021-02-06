#include<stdio.h>

main(){
    int i, j, y, s=0, x, n;
    printf("Unesite vrednost clanova: "); scanf("%d", &x);
    printf("Unesite broj clanova: "); scanf("%d", &n);
    y=1;
    for(i=0; i<=n; i++){
        y=1;
        for(j=1; j<=i; j++)
            y*=x;
        s+=y;

    }
    printf("Zbir prvih %d clanova niza je: %d\n", n, s);
    printf("efikasnije\n");
    //efikasnije
    y=1;
    s=1;
    for(i=1; i<=n; i++){
        y*=x;
        s+=y;
    }
    printf("Zbir prvih %d clanova niza je: %d\n", n, s);
}
