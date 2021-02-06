#include<stdio.h>

main(){
    int br= 0, ch;
    char v, m;
    printf("Unesite veliko i malo slovo: "); scanf("%c %c", &v, &m);
    while((ch = getchar()) != EOF){
        if((ch == v) || (ch == m)) br++;
    }
    printf("Broj slova je: %d", br);
}
