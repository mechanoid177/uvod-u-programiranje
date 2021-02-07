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
    FILE *f1, *f2;
    char ulaz1[100][100], ulaz2[100][100];
    char s1[100], s2[100];
    int i, j = 0;

    if(argc < 3){
        printf("Nedovoljno argumenata!!!\n");
        exit(101);
    }

    printf("Unesite sadrzaj prve datoteke:\n");
    for(i = 0; (fgets(ulaz1[i], 100, stdin) != NULL) && i < 10; i++)
        file_create(argv[1], "a", 1, ulaz1[i]);

    printf("Unesite sadrzaj druge datoteke:\n");
    for(i = 0; (fgets(ulaz2[i], 100, stdin) != NULL) && i < 10; i++)
        file_create(argv[2], "a", 1, ulaz2[i]);

    if((f1 = fopen(argv[1], "r")) == NULL){
        printf("Greska pri otvaranju prve datoteke!!!\n");
        exit(100);
    }

    if((f2 = fopen(argv[2], "r")) == NULL){
        printf("Greska pri otvaranju druge datoteke!!!\n");
        exit(101);
    }

    i = 0;
    while(1)
    {
        s1[0] = s2[0] = '\0';
        fgets(s1, 100, f1);
        fgets(s2, 100, f2);

        if (s1[0] == '\0' && s2[0] == '\0') break;

        if(strcmpi(s1, s2) != 0)
        {
            printf("Datoteke se razlikuju po %d. redu:\n\n", i + 1);
            printf("- %d. red datoteke %s:\n%s\n- %d. red datoteke %s:\n%s\n",
                   i + 1,
                   argv[1],
                   s1,
                   i + 1,
                   argv[2],
                   s2
                   );
            j = 1;
            break;
        }

        i++;
    }

    if(!j) printf("Datoteke su iste\n");

    fclose(f1);
    fclose(f2);
    return 0;
}
