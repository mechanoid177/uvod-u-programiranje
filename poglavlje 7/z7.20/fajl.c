#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void provera(char *str){
    char *s = str;
    while(*s){
        if(/**s == ' ' || *s == '\t' || */*s == '\n')
            break;
        *str++ = *s++;
    }
    *str = '\0';
}

int main() {
    FILE *f1, *f2, *f3, *f4;
    char naslov[100], autor[50], ISBN[18];
    int i;

    srand(time(0));

    if( (f1 = fopen("knjiga.txt", "w")) == NULL) {
        printf("Greska pri kreiranju datoteke!!!\n");
        exit(100);
    }

    if( (f2 = fopen("naslov.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke naslov.txt!!!\n");
        exit(101);
    }

    if( (f3 = fopen("autor.txt", "r")) == NULL) {
        printf("Greska pri kreiranju datoteke autor.txt!!!\n");
        exit(100);
    }

    if( (f4 = fopen("ISBN.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke ISBN.txt!!!\n");
        exit(101);
    }

    for(i = 0; i < 100; i++){
        fgets(naslov, 100, f2);
        fgets(ISBN, 100, f4);
        fgets(autor, 50, f3);
        provera(naslov);
        provera(autor);
        provera(ISBN);
        fprintf(f1, "%100s %50s %18s %4i\n", naslov, autor, ISBN, rand() % 2000 + 1);
    }

    fclose(f1);
    fclose(f2);
    fclose(f3);
    fclose(f4);
    return 0;
}
