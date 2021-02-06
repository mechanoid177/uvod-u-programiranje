#include <stdio.h>
#include <string.h>
/*
    -r ?
    -n ispisati svaki red teksta zajedno sa rednim brojem
    -t ispisati redni broj bez sadrzaja
    -x upper to lower lower to upper
*/

int get_line(char *argv[], int *n, int **indexi){
    int i, j, k = 0;
    for(i = 2; i < *n; i++){
        for(j = 0; j < strlen(argv[i]); j++){
            printf("%c\n", argv[i][j]);
            if(argv[i][j] == '\n' || argv[i][j] == EOF){
                indexi[0][k] = i;
                indexi[1][k++] = j;
            }
        }
    }
    return k;
}

int main(int argc, char **argv){
    int **indexi;
    int k, i, j;
    if(argc <= 1){
        printf("Nema parametara\n");
        return 1;
    }
    printf("%s\n%c\n%c\n", argv[0], argv[1][0], argv[1][1]);
    k = get_line(argv, &argc, indexi);
    printf("k = %d\n", k);
    if(argv[1][0] = '-'){
        printf("Uso u if\n");
        switch(argv[1][1]){
            case 'n':
                printf("Uso u case\n");
                for(i = 1; i <= k; i++){
                    printf("%d. ", i);
                    for(j = 0; j <= k; j++){
                        puts(argv[j]);
                    }
                    printf("\n");
                }
                break;
            case 't':
                break;
            case 'x':
                break;
            default:
                printf("Pogresan unos opcionog parametra!!!\n");
                return 1;
        }
    }
}
