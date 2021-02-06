#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_file(char *ime_fajla, char *opcija, char *string){
    FILE *f;

    if ((f = fopen(ime_fajla, opcija)) == NULL){
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }

    fprintf(f, "%s", string);

    fclose(f);
    f = NULL;
}

int main(int argc, char **argv) {
    FILE *f;
    char ulaz[100][100], br[100];
    int i, god;

    for(i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
        create_file(argv[1], "a", ulaz[i]);

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    printf("Unesite tekucu godinu: ");
    scanf("%i", &god);

    while(fgets(br, 100, f) != NULL) {
        int fgod = atoi(br + 6);
        if(god == fgod) printf("%s", br);
    }

    fclose(f);
    return 0;
}
