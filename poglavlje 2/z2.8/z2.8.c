#include<stdio.h>
#include<math.h>

main(){
    float x, y, z, min, max;
    printf("Unesite x i y:\n");
    scanf("%f\n%f", &x, &y);
    min= x<y ? x : y;
    max= x>y ? x : y;
    z=sqrt((min+sin(x+0.5))/(max*max-1));
    printf("z = %f\nmin = %f\nmax = %f\n", z, min, max);
    system("pause");
}
