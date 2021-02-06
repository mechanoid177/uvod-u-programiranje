#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void file_create(char *file_name, char* mode, int n_args, ...){
    FILE *fc;

    va_list args;
    va_start(args, n_args);
    int i;

    if((fc = fopen(file_name, mode)) == NULL){
        fprintf(stderr, "Greska pri kreiranju datoteke %s!!!\n", file_name);
        exit(EXIT_FAILURE);
    }

    for(i = 1; i <= n_args; i++){
        fputs(va_arg(args, char*), fc);
    }

    va_end(args);

    fclose(fc);
    fc = NULL;
}

int main(){
    FILE *f, *g;
    char ulaz[10][100], c[100];
    int i, j = 1;
    printf("Unesite sadrzaj:\n");
    for(i = 0; (fgets(ulaz[i], 100, stdin) != NULL) && i < 10; i++)
        file_create("f.txt", "a", 1, ulaz[i]);

    if((f = fopen("f.txt", "r")) == NULL){
        printf("Greska pri otvaranju datoteke %s!!!\n", "f.txt");
        exit(EXIT_FAILURE);
    }

    if((g = fopen("g.txt", "w")) == NULL){
        printf("Greska pri otvaranju datoteke %s!!!\n", "g.txt");
        exit(EXIT_FAILURE);
    }

    while(fgets(c, 100, f) != NULL){
        fprintf(g, "%d\t%s", j++, c);
    }

    fclose(f);
    fclose(g);

    return 0;
}
