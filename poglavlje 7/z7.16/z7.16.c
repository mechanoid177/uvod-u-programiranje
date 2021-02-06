#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int redni_broj;
    int bar_kod;
    char ime[20];
    double cena;
    int kolicina;
} Proizvod;

int provera(Proizvod p[], int redni_broj, int max) {
    for(int i = 0; i < max; i++)
        if(p[i].redni_broj == redni_broj) return i;
    return -1;
}

void racun_sort(Proizvod p[], int n) {
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(p[i].redni_broj > p[j].redni_broj) {
                printf("1\n");
                Proizvod tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
}

int main(int argc, char **argv) {
    FILE *f;
    int i = 0, j, izabrani_redni_broj, izabrana_kolicina;
    double racun_ukupno = 0.0;
    char ch = 1;
    Proizvod p[500];

    if(argc < 2) {
        printf("Nedovoljno argumenata!!!\n");
        exit(100);
    }

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke %s!!!\n", argv[1]);
        exit(101);
    }

    while( (i < 500) && (ch != 'y') ) {
        printf("Unesite redni broj proizvoda: ");
        scanf("%i", &izabrani_redni_broj);
        printf("Kolicina: ");
        scanf("%i", &izabrana_kolicina);
        fflush(stdin);
        fseek(f, (izabrani_redni_broj - 1) * 46, SEEK_SET);
        fscanf(f, "%i %i %s %lf", &p[i].redni_broj, &p[i].bar_kod, p[i].ime, &p[i].cena);
        if( (j = provera(p, izabrani_redni_broj, i)) >= 0 ){
            p[j].kolicina += izabrana_kolicina;
            racun_ukupno += p[i].cena * izabrana_kolicina;
            fflush(stdin);
            printf("Da li ste gotovi? y/n ");
            scanf("%c", &ch);
            continue;
        }
        p[i].kolicina += izabrana_kolicina;
        racun_ukupno += p[i].cena * izabrana_kolicina;
        fflush(stdin);
        i++;
        printf("Da li ste gotovi? y/n ");
        scanf("%c", &ch);
    }

    racun_sort(p, i);

    printf("RACUN\n");
    printf("+------------+-----------+----------------------+----------------+----------+------------------------+\n");
    printf("| redni broj |  bar kod  |         naziv        | cena po komadu | kolicina | ukupna cena po artiklu |\n");
    printf("+------------+-----------+----------------------+----------------+----------+------------------------+\n");
    for(j = 0; j <= i - 1; j++)
        printf("|       %4i | %09i | %20s |       %8.2lf |      %3i |               %8.2lf |\n",
               p[j].redni_broj,
               p[j].bar_kod, p[j].ime,
               p[j].cena, p[j].kolicina,
               p[j].cena * p[j].kolicina);
    printf("+------------+-----------+----------------------+----------------+----------+------------------------+\n");
    printf("| Ukupno:                                                                                   %8.2lf |\n",
           racun_ukupno);
    printf("+------------+-----------+----------------------+----------------+----------+------------------------+\n");

    fclose(f);
    return 0;
}
