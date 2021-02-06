#include<stdio.h>
#include<math.h>

main(){
    float k, n, p;
    printf("Unesite koeficijent prave i parametar n \t"
           "eksplicitnog oblika jednacine prave y=kx+n\n");
    printf("k = ");
    scanf("%f", &k);
    printf("n = ");
    scanf("%f", &n);
    printf("Unesite parametar p jednacine parabole y^2=2px\np = ");
    scanf("%f", &p);
    printf("Prava %s tangenta parabole\n", 2*k*n==p ? "je" : "nije");
    system("pause");
}
