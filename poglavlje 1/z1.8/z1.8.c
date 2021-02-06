#include<stdio.h>
#include<math.h>
#define Ho 75

main(){
    float vrad;
    printf("Unesite radijalnu brzinu: ");
    scanf("%f", &vrad);
    printf("Rastojanje iznosi: %.3f\n", vrad/Ho);
    system("pause");
}
