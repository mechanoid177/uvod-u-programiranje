#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main(){
    srand(time(0));
    printf("Broj: %d\n", rand()%100+1);
    return 0;
}
