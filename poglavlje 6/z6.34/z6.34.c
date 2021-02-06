#include <stdio.h>

int main(int argc, char **argv){
    if(argc <= 1){
        printf("Nema parametara\n");
        return 1;
    }
    printf("%s + %s = %d\n", argv[1], argv[2], argv[1][0] * argv[2][0] - 96);
}
