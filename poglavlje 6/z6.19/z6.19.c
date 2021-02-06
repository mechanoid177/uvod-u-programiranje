#include <stdio.h>
#include <string.h>

void ispisi(int n, char *s){
    int cf[100], i = 0, ost;
    while(n){
        ost = n % 10;
        n /= 10;
        cf[i++] = ost;
    }
    i--;
    for(; i >= 0; i--){
        switch(cf[i]){
            case 0:
                strcpy(s, "nula ");
                s += 5;
                break;
            case 1:
                strcpy(s, "jedan ");
                s += 6;
                break;
            case 2:
                strcpy(s, "dva ");
                s += 4;
                break;
            case 3:
                strcpy(s, "tri ");
                s += 4;
                break;
            case 4:
                strcpy(s, "cetri ");
                s += 6;
                break;
            case 5:
                strcpy(s, "pet ");
                s += 4;
                break;
            case 6:
                strcpy(s, "sest ");
                s += 5;
                break;
            case 7:
                strcpy(s, "sedam ");
                s += 7;
                break;
            case 8:
                strcpy(s, "osam ");
                s += 5;
                break;
            case 9:
                strcpy(s, "devet ");
                s += 6;
                break;
            default: printf("Greska!!!\n");
        }
    }
}

int main(){
    char s[100];
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);
    ispisi(n, s);
    puts(s);
    return 0;
}
