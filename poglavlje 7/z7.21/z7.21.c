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
    FILE *f, *f1;
    char ulaz[100][100], br[100], ch;
    int i = 0;

//    if(argc < 3) {
//        printf("Nedovoljno argumenata!!!\n");
//        exit(103);
//    }

//    for(i = 0; fgets(ulaz[i], 100, stdin) != NULL && i < 100; i++)
//        create_file(argv[1], "a", ulaz[i]);

    if( (f = fopen("f.txt", "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(102);
    }

    if( (f1 = fopen("g.txt", "w")) == NULL ) {
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(101);
    }

    while( fgets(br, 100, f) != NULL ) {
        char *p = br;
        while( *p != ' ' && *p != '\t' && *p != '\n') {
             = *p++;
            *br += 1;
        }
        *br = '\0';
        fputs(br, f1);
        p = NULL;
    }

    fclose(f1);
    fclose(f);
    return 0;
}
