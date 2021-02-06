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
    fc = NULL;
}

int main(int argc, char **argv){
    FILE *f1, *f2;
    char c[100], ulaz[10][100], d1[20], d2[20];
    int i;

    printf("Unesi imena datoteka:\n");
    scanf("%s %s", d1, d2);
    printf("Unesite podatke za datoteke:\n");
    fflush(stdin);
    fflush(stdout);
    for(i = 0; (fgets(ulaz[i], 100, stdin) != NULL) && (i < 10); i++){
        file_create(d1, "a", 1, ulaz[i]);
        file_create(d2, "a", 1, ulaz[i]);
    }

    if(argc < 3){
        printf("Nedovoljno argumenata!!!\n");
        exit(EXIT_FAILURE);
    }

    if((f1 = fopen(argv[1], "r")) == NULL){
        printf("Greska pri otvaranju prve datoteke");
        exit(EXIT_FAILURE);
    }

    if((f2 = fopen(argv[2], "a")) == NULL){
        printf("Greska pri otvaranju druge datoteke");
        exit(EXIT_FAILURE);
    }

    while(fgets(c, 100, f1) != NULL) fputs(c, f2);

    fclose(f1);
    fclose(f2);

    return 0;
}
