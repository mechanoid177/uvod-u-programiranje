#include<stdio.h>

main(){
    char ms;
    printf("Unesite malo slovo: ");
    scanf("%c", &ms);
    while(ms<'a'){
            printf("Ponovo: ");
            scanf("%c", &ms);
            getchar();
    }

    printf("%c\n", ms-('a'-'A'));
    system("pause");
}
