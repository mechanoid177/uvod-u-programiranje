#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void strapp(){

}

int main(int argc, char *argv[]){
    int i = 0, j, a1, k;
    char a[100];
    if(argc < 3){
        printf("Nedovoljno argumenata!!!\n");
        exit(EXIT_FAILURE);
    }


        while(*argv[1] != '+')
            a[i++] = *argv[1]++;
        a[i] = '\0';

    a1 = atoi(a);
    printf("%d\n", a1);
}
