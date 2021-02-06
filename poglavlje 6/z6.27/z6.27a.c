#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

int getline(char line[], int max_size){
    int dim;
    char ch;
    for(dim = 0;
        dim < max_size - 1 && (ch = getchar()) != EOF && ch != '\n';
        ++dim){
        line[dim] = ch;
        printf("getline for\n");
    }
    if(ch == '\n') line[dim++] = ch;
    line[dim] = '\0';
    return dim;
}

void change(char *str){
    while(*str){
        if(isupper(*str)) *str = tolower(*str);
        else if(islower(*str)) *str = toupper(*str);
        str++;
    }
}

int main(int argc, char **argv){
    char line[MAX_SIZE], *rec;
    int br_line = 0;
    int dim_o;
    if(argc < 3){
        printf("Nema parametara");
        return 1;
    }
    rec = argv[2];
    dim_o = strlen(argv[1]);
    printf("strlen\n");
    if(argv[1][0] != '-' || dim_o == 0 || dim_o > 2){
        printf("Los opcioni argument1");
        return 2;
    }
    while(getline(line, MAX_SIZE)){
        printf("while\n");
        br_line++;
        switch(argv[1][1]){
            case 'n':
                printf("%d : %s", br_line, line);
                break;
            case 'x':
                change(line);
                puts(line);
                break;
            case 't':
                if(strstr(line, rec) != NULL)
                    printf("%d : %s", br_line, line);
                else printf("%d\n", br_line);
                break;
            default:
                printf("Los opcioni argument2\n");
                return 3;
        }
    }
    return 0;
}
