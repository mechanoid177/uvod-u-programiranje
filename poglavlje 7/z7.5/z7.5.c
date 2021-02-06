#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int main(int argc, char **argv){
    FILE *fajl;
    char s[100], c[100][100], ulaz[100][100];
    int i, max = 0, pom, j = 0;

    if(argc < 2){
        printf("Nedovoljno argumenata!!!\n");
        exit(101);
    }

    printf("Unesite sadrzaj:\n");
    for(i = 0; (fgets(ulaz[i], 100, stdin) != NULL) && i < 10; i++)
        file_create(argv[1], "a", 1, ulaz[i]);

    if((fajl = fopen(argv[1], "r")) == NULL){
        printf("Greska pri otvaranju datoteke!!!\n");
        exit(102);
    }
    printf("1\n");
    while(fgets(s, 100, fajl) != NULL){
        if((pom = strlen(s)) > max){
            strcpy(c, s);
            max = pom;
        }
        else if(pom == max){
            strcpy(c, s);
            max = pom;
        }
    }

    printf("%s\n", c);

    fclose(fajl);
    return 0;
}
