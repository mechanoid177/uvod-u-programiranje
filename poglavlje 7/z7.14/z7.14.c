#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f1, *f2;

    if( (f1 = fopen("recnik.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke recnik.txt!!!\n");
        exit(100);
    }

    if( (f2 = fopen("f.txt", "r")) == NULL) {
        printf("Greska pri otvaranju datoteke f.txt!!!\n");
        exit(101);
    }



    fclose(f1);
    fclose(f2);
    return 0;
}
