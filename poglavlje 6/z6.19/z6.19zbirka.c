#include <stdio.h>
#include <string.h>

void strins(char *s, char *t){
    char buf[100];
    strcpy(buf, s);
    strcpy(s, t);
    strcpy(s, buf);
}

int main(){
    int broj, add = 0, i = 0;
    char s_broj[100];
    printf("Unesite broj: ");
    scanf("%d", &broj);
    while(broj){
        switch(broj%10){
            case 0:
                strins(s_broj, "nula "); break;
            case 1:
                strins(s_broj, "jedan "); break;
            case 2:
                strins(s_broj, "dva "); break;
            case 3:
                strins(s_broj, "tri "); break;
            case 4:
                strins(s_broj, "cetri "); break;
            case 5:
                strins(s_broj, "pet "); break;
            case 6:
                strins(s_broj, "sest "); break;
            case 7:
                strins(s_broj, "sedam "); break;
            case 8:
                strins(s_broj, "osam "); break;
            case 9:
                strins(s_broj, "devet "); break;
            default: printf("Greska!!!\n");
        }
        broj /= 10;
    }
    printf("Broj: %s\n", s_broj);
    return 0;
}
