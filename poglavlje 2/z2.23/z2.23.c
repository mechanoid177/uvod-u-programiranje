#include <stdio.h>
#include <math.h>

main(){
    float c;
    printf("Unesite cenu proizvoda: ");
    scanf("%f", &c);
    printf("Porez iznosi: %f\n", c<10000 ? c/100*8 : c/100*18);
    system("pause");
}
