#include<stdio.h>
#include<math.h>

main(){
    float n1, n2;
    printf("Unesite 2 broja.\n");
    scanf("%f\n%f", &n1, &n2);
    printf("Aritmeticka sredina: %.3f\n", (n1+n2)/2);
    printf("Geometrijska sredina: %.3f\n", sqrt(n1*n2));
    system("pause");
}
