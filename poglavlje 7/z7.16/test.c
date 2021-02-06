#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f;
    char ch[100], ime[100];
    int n, redni_broj, bar_kod;
    double cena;

    if( (f = fopen("f.txt", "r")) == NULL) {
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }
    for(n = 0; n < 5; n++) {
        fseek(f, n * 46, SEEK_SET);
        fscanf(f, "%i %i %s %lf", &redni_broj, &bar_kod, ime, &cena);
        //fgets(ch, 100, f);
        printf("%i -> ", n);
        //printf("%s\n", ch);
        printf("%04i %09i %20s %8.2lf\n", redni_broj, bar_kod, ime, cena);
        fseek(f, 0, SEEK_SET);
    }
    fclose(f);
    return 0;
}
