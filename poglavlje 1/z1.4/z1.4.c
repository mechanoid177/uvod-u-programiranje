#include<stdio.h>
#include<math.h>

main(){
    int n1, n2, p;
    printf("Unesite prvi broj: ");
    scanf("%d", &n1);
    printf("Unesite drugi broj: ");
    scanf("%d", &n2);
    if(n1<n2){
        p=n1;
        n1=n2;
        n2=p;
    }
    printf("Zbir iznosi: %d\n", n1+n2);
    printf("Razlika iznosi: %d\n", n1-n2);
    printf("Kolicnik iznosi: %f\n", (double)n1/n2);
    printf("Proizvod iznosi: %d\n", n1*n2);
    printf("Kvadratni koren veceg broja iznosi: %.3f\n", sqrt(n1));
    printf("Kvadratni koren manjeg broja iznosi: %.3f\n", sqrt(n2));
    system("pause");
}
