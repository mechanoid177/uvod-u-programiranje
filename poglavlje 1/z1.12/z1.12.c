#include<stdio.h>

main(){
    float kusur, c, dn;
    printf("Unesite cenu: ");
    scanf("%f", &c);
    printf("Koliko je novca dao kupac: ");
    scanf("%f", &dn);
    kusur=dn-c;
    printf("%f", kusur);
    printf("Kusur: %d dinara i %d para\n", (int)kusur, (int)((kusur-(int)kusur)*100));
    system("pause");
}
