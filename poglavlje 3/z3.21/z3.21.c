#include<stdio.h>
#include<math.h>

main(){
    int i, n;
    float x;
    printf("Unesite broj: "); scanf("%d", &n);
    printf(" ----- ----- -----\n");
    printf("|  a  |  b  |  c  |\n");
    printf(" ----- ----- -----\n");
    for(i = 1; i < n; i++){
        x =sqrt(i*i + (i + 1)*(i + 1));
        if(ceil(x) == (x)){
            printf("|%5d|%5d|%5d|\n", i, i + 1, (int)x);
            printf(" ----- ----- -----\n");
        }
    }
}
