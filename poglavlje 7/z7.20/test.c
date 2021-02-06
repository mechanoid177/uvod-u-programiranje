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
    FILE *f3;
    char naslov[100], autor[100], ISBN[18];
    int i;

    srand(time(0));

    if( (f3 = fopen("autor.txt", "r")) == NULL) {
        printf("Greska pri kreiranju datoteke autor.txt!!!\n");
        exit(100);
    }



    for(i = 0; i < 100; i++) {
        fgets(autor, 100, f3);
        provera(autor);
        printf("%s\n", autor);
    }

    fclose(f3);
    return 0;
}
