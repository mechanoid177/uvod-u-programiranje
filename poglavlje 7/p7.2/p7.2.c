#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>

void file_create(char *file_name, int n_args, ...){
    FILE *fc;

    va_list args;
    va_start(args, n_args);
    int i;

    if((fc = fopen(file_name, "w")) == NULL){
        fprintf(stderr, "Greska pri otvaranju kreirane datoteke!!!\n");
        exit(EXIT_FAILURE);
    }

    for(i = 1; i <= n_args; i++){
        fprintf(fc, va_arg(args, char*));
    }

    va_end(args);

    fclose(fc);
}

int main(){
    FILE *file;
    int a, b;

    char ulaz[100];
    printf("Unesite podatke za fajl: ");
    fgets(ulaz, 100, stdin);

    file_create("out.txt", 1, ulaz);

    if((file = fopen("out.txt", "r")) == NULL){
        fprintf(stderr, "Greska pri otvaranju datoteke!!!\n");
        exit(EXIT_FAILURE);
    }

    if(feof(file)){
        perror("Podaci su nekorektno zapisani!!!\n");
        exit(EXIT_FAILURE);
    }

    fscanf(file, "%i %i", &a, &b);

    printf("%i^%i = %.0lf\n", a, b, pow(a, b));

    fclose(file);
}


