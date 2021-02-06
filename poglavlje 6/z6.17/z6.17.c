#include <stdio.h>
#include <string.h>

int getline(char line[], int max_size){
    int dim;
    char ch;
    for(dim = 0; dim < max_size - 1 && (ch = getchar()) != EOF && ch != '\n'; ++dim)
        line[dim] = ch;
    if(ch == '\n') line[dim++] = ch;
    line[dim] = '\0';
    return dim;
}

void izbaci(char *s, char *tmp){
    int duz = strlen(s), t;
    char *poc = "/*", *kraj = "*/";
    char * poz_poc = strstr(s, poc), *poz_kraj = strstr(s, kraj);
    tmp[0] = '\0';
    if(poz_poc == NULL || poz_kraj == NULL){
        strcpy(tmp, s);
        return;
    }
    strncat(tmp, s, poz_poc - s);
    strcat(tmp, poz_kraj + 2);
}

int main(){
    char line[100];
    while(getline(line, 100) > 0){
        char tmp[100];
        izbaci(line, tmp);
        puts(tmp);
    }
    return 0;
}
