#include<stdio.h>

main(){
    int vr;
    vr='C';
    printf("%s\nznak=", "Veliko:");
    printf("%3c\nvrednost=%3d\n", vr, vr);
    vr='c';
    printf("%s\nznak=", "Malo:");
    printf("%3c\nvrednost=%3d\n", vr, vr);
    system("pause");
}
