#include<stdio.h>

main(){
    long i,s=0, j, k;
    for(i=100; i<1000; i++){
        if (i%100 < 50 && i%10%2 == 1){
            printf("%d\n", i);
            s++;
        }
    }
    printf("%d\", s);
    //drugi nacin
    printf("for petlje\n");
    for(i=1; i<=9; i++){
        for(j=0; j<=4; j++){
            for(k=1; k<=9; k+=2)
                printf("%d\n", i*100+j*10+k);
        }
    }
    return 0;
}
