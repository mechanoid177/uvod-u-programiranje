#include <stdio.h>

main(){
    float p;
    printf("Unesite broj osvojenih poena: ");
    scanf("%f", &p);
    if(p<51)
        printf("Ocena 5\n");
    else if(p<61)
        printf("Ocena 6\n");
    else if(p<71)
        printf("Ocena 7\n");
    else if(p<81)
        printf("Ocena 8\n");
    else if(p<91)
        printf("Ocena 9\n");
    else
        printf("Ocena 10\n");
    system("pause");
}
