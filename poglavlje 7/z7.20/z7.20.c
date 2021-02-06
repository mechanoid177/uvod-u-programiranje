#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char naslov[100];
    char autor[50];
    char ISBN[13];
    int godina;
} Knjiga;

void pretraga_godina(Knjiga k[], int god, int n) {
    int j = 0;
    for(int i = 0; i < n; i++){
        if( k[i].godina == god) {
            printf("%s\n", k[i].autor);
            j++;
        }
    }
    if( !j ) printf("Nema rezultata pretrage!!!\n");
}

void pretraga_autor(Knjiga k[], char *a, int n) {
    int j = 0;
    for(int i = 0; i < n; i++)
    if( !strcmpi(k[i].autor, a) ) {
        printf("%s\n", k[i].naslov);
        j++;
    }
    if( !j ) printf("Nema rezultata pretrage!!!\n");
}

void pretraga_ISBN(Knjiga k[], char *isbn, int n) {
    for(int i = 0; i < n; i++)
        if( !strcmp(k[i].ISBN, isbn) )
            printf("%100s %50s %18s %4i\n",
                   k[i].naslov,
                   k[i].autor,
                   k[i].ISBN,
                   k[i].godina);
            return;
    printf("Nema rezultata pretrage!!!\n");
}

void pretraga_naslov(Knjiga k[], char *nas, int n) {
    for(int i = 0; i < n; i++)
        if( !strcmpi(k[i].naslov, nas)){
            printf("%s\n", k[i].autor);
            return;
        }
    printf("Nema rezultata pretrage!!!\n");
}

int main() {
    FILE *f;
    Knjiga k[100];
    int i = 0, opcija = 10, god;
    char *nas, *isbn, *a;

    if( (f = fopen("knjiga.txt", "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke knjige.txt\n");
        exit(100);
    }

    while( fscanf(f, "%s %s %s %i", k[i].naslov, k[i].autor, k[i].ISBN, &k[i].godina) != EOF ) {
            printf("%100s %50s %18s %4i\n",
                   k[i].naslov,
                   k[i].autor,
                   k[i].ISBN,
                   k[i].godina);
            i++;
    }

    for(int j = 0; j < i; j++)
        printf("%100s %50s %18s %4i\n",
                   k[j].naslov,
                   k[j].autor,
                   k[j].ISBN,
                   k[j].godina);

    while(1) {
        printf("Izaberite opciju:\n");
        printf("1. Godine\n2. Autora\n3. ISBN\n4. Naslova\n0. Kraj");
        scanf("%i", &opcija);
        switch(opcija) {
            case 1:
                printf("Unesite godinu: ");
                scanf("%i", &god);
                pretraga_godina(k, god, i);
                break;
            case 2:
                printf("Unesite ime autora: ");
                scanf("%s", a);
                pretraga_autor(k, a, i);
                break;
            case 3:
                printf("Unesite ISBN: ");
                scanf("%s", isbn);
                pretraga_ISBN(k, isbn, i);
                break;
            case 4:
                printf("Unesite naslov knjige: ");
                scanf("%s", nas);
                pretraga_naslov(k, nas, i);
                break;
            case 0:
                exit(EXIT_SUCCESS);
                break;
            default:
                printf("Greska pri unosu!!!\n");
        }
    }

    fclose(f);
    return 0;
}
