#include <stdio.h>

int main(int argc, char **argv){
    int i;
    if(argc <= 1){
        printf("Nema argumenata\n");
        return 1;
    }
    printf("Komande su:\n");
    for(i = 1; i < argc; i++) printf("%s ", argv[i]);
    return 0;
}
