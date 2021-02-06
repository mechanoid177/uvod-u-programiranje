#include <stdio.h>
#include <math.h>

main(){
    float k, n, a, b;
    printf("Unesite duzine polovina manje i vece ose elipse:\na = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("Unesite koeficijent i parameter eksplicitnog "
            "oblika jednacine prave y=kx+n:\nk = ");
    scanf("%f", &k);
    printf("n = ");
    scanf("%f", &n);
    printf("Prava %s tangenta elipse\n", pow(a*k,2)+pow(b,2) == pow(n,2) ? "je" : "nije");

    system("pause");
}
