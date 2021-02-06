#include<stdio.h>

main(){
    int n, i;
    double s=1;
    printf("Unesite stepen broja 2: "); scanf("%d", &n);
    if (n<0){
        for(i=-1; i>=n; i--)
            s/=2;
        printf("%d. stepen broja 2: %f\n", n, s);
    }
    else
        printf("%d. stepen broja 2: %d\n", n, 1<<n);
    return 0;
}
