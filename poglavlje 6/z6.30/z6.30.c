#include <stdio.h>
#include <string.h>

void izbrisi_broj(char *str){
    int i, j;
    for(i = 0; i < strlen(str); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            for(j = i; j < strlen(str); j++){
                str[j] = str[j + 1];
            }
        }
    }
}

int main(){
    char str[100];
    printf("Unestie string: ");
    gets(str);
    izbrisi_broj(str);
    printf("%s\n", str);
}
