#include <stdio.h>
#include <string.h>

void sort_str(char *argv[], int *n){
    int i, j;
    for(i = 1; i < *n - 1; i++)
        for(j = i + 1; j < *n; j++)
            if(strcmpi(argv[i], argv[j]) > 0){
                char *tmp = argv[i];
                argv[i] = argv[j];
                argv[j] = tmp;
            }

    for(i = 1; i < *n; i++) puts(argv[i]);
}

int main(int argc, char **argv){
    if(argc <= 1){
        printf("Nema parametara\n");
        return 1;
    }
    sort_str(argv, &argc);
    return 0;
}
