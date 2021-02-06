#include <stdio.h>

main(){
    float a, b, c, d, max;
    printf("Unesite 4 broja: \n");
    scanf("%f\n%f\n%f\n%f", &a, &b, &c, &d);
    max = a<b ? b : a;
    max = max<c ? c : max;
    printf("Najveci broj je %f\n", max<d ? d : max);
    system("pause");
}
