#include<stdio.h>
#include<math.h>
#define PI 3.14

main(){
    float r;
    printf("Unesite poluprcnik kruga: ");
    scanf("%f", &r);
    printf("Povrsina kruga iznosi: %f\n", PI*pow(r,2));
    system("pause");
}
