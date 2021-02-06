#include<stdio.h>
#include<math.h>

main(){
    int i, n, c, s = 0;
    float x;
    printf("Unesite broj: "); scanf("%d", &n);
    printf("%f\n", pow(10,round(log10(n) + 1)));
    x = pow(10,round(log10(n) + 1));
    for(i = 10; i <= x; i *= 10){ //zasto ne radi bez x?
        c = n % 10;
        n = n / 10;
        s += c;
        printf("%d\n", c);
    }
    printf("Suma cifara iznosi: %d\n", s);
}
