#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void file_create(char *file_name, char* mode, int n_args, ...){
    FILE *fc;

    va_list args;
    va_start(args, n_args);
    int i;

    if((fc = fopen(file_name, mode)) == NULL){
        fprintf(stderr, "Greska pri kreiranju datoteke!!!\n");
        exit(EXIT_FAILURE);
    }

    for(i = 1; i <= n_args; i++){
        fputs(va_arg(args, char*), fc);
    }

    va_end(args);

    fclose(fc);
}

int main(){
    FILE *fajl;
    int i, j, brojac = 0;
    char ulaz[10][100], ime_fajla[100], ch[100];
    printf("Unesite podatke za fajl:\n");
    for(i = 0; (fgets(ulaz[i], 100, stdin) != NULL) && i < 10; i++){
        file_create("fajl.txt", "a+", 1, ulaz[i]);
    }

    printf("Unesite ime tekstualne datoteke: ");
    scanf("%s", ime_fajla);

    fajl = fopen(ime_fajla, "r");
    if((fajl) == NULL){
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(EXIT_FAILURE);
    }

    while(fgets(ch, 100, fajl) != NULL) brojac++;

    printf("Broj redova u fajlu je: %i\n", brojac);

    fclose(fajl);


}
