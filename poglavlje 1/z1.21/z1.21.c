#include<stdio.h>

main(){
    float st, min, sec, std, h, minv, secv;
    printf("Unesite stepene: ");
    scanf("%f", &st);
    printf("Unesite minute: ");
    scanf("%f", &min);
    printf("Unesite sekunde: ");
    scanf("%f", &sec);
    std=st+min/60+sec/60;
    h=std/15;
    minv=(h-(int)h)*60;
    secv=(minv-(int)minv)*60;
    printf("Sati: %d\nMinuti: %d\nSekunde: %d\n", (int)h, (int)minv, (int)secv);
    system("pause");
}
