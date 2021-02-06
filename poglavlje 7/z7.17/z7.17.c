#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    FILE *f;
    char putanja[500];
    char komanda[200];
    char ime_dir[50];

    if( argc < 2 ) {
        printf("Nedovoljno argumenata!!!\n");
        exit(100);
    }

    if( (f = fopen(argv[1], "r")) == NULL ) {
        printf("Greska pri otvaranju datoteke %s!!!\n", argv[1]);
        exit(101);
    }

    printf("Putanja gde treba napraviti direktorijume:\n");
    gets(putanja);

    while( fgets(ime_dir, 50, f) != NULL){
        komanda[0] = '\0';
        strcat(komanda, "mkdir ");
        strcat(komanda, putanja);
        strcat(komanda, "\\");
        strcat(komanda, ime_dir);
        system(komanda);
    }

    return 0;
}
