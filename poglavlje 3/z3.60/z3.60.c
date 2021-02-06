#include<stdio.h>

main(){
    int i, j;
    for(i = 100; i <= 999; i++){
        for(j = 2; j <= i / 2; j++){
            if((i % j) == 0){
                break;
            }
        }
        if(i % j) printf("%d\n", i);
    }
}
