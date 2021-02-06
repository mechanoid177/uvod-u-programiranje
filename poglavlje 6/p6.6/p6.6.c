#include <stdio.h>

int main(int argc, char **argv){
    int i;
    printf("Broj argumenata komandne linije je %d\n", argc);
    printf("Parametri komandne linije:\n");
    for(i = 0; i < argc; i++) printf("%s\n", argv[i]);
    return 0;
}
