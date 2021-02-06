#include<stdio.h>
#include<math.h>

main(){
    int n, b, c, db = 0, i = 0, ch;
    printf("Unesite bazu: "); scanf("%d", &n);
    if(n < 10){
        printf("Unesite broj: "); scanf("%d", &b);
        while(b > 0){
            c = b % 10;
            b /= 10;
            db += c * pow(n, i);
            if((c < 0) || (c > 9)){
                printf("Greska pri unosu/n");
                return 1;
            }
            else i++;
        }
        printf("Uneti broj u dekadnom sistemu je: %d\n", db);
    }
    else if(n == 10){
        printf("Sledeci put unesite drugu bazu\n");
        return 2;
    }
    else if(n < 17){
        printf("Unesite broj: ");
        fflush(stdin);
        while((ch = getchar()) != '\n'){
            printf("%d\n",ch);
            if(ch <= '9'){
                db += (ch - '0') * pow(n, i);
                printf("%d %d\n",db, i);
            }
            else if((ch < 'g') && (ch >= 'a')){
                db += (ch - 'a' + 10) * pow(n, i);
                printf("%d %d\n",db, i);
            }
            i++;
        }
        printf("Uneti broj u dekadnom sistemu je: %d\n", db);
    }
    else{
        printf("Pogresan unos\n");
        return 3;
    }
}
