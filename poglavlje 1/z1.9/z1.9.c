#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

main(){
    int n, m;
    srand(time(0));
    n = rand() % 10 + 1;
    m = rand() % 10 + 1;
    printf("%d^%d = %.0f\n", n, m, pow(n, m));
}
