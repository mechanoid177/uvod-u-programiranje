#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ime[50];
    char prezime[50];
    int godiste;
} Osoba;

int main(int argc, char **argv) {
    FILE *f;
    Osoba o[100];
    int i;

    if (argc < 2) {
        printf("Nedovoljno argumenata!!!\n");
        exit(100);
    }

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranu datoteke!!!\n");
        exit(101);
    }

    for(i = 0; i < 100; i++) {
        fscanf(f, "%s %s %i", &o[i].ime, &o[i].prezime, &o[i].godiste);
        if( o[i].godiste > 1980 )
            printf("%s %s %i\n", o[i].ime, o[i].prezime, o[i].godiste);
    }

    fclose(f);
    return 0;
}
