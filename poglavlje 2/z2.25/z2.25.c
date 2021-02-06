#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, max;
    printf("Unesite duzine stranica: \n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    max=a;
    if(a<b && c<b)
        max=b;
    else if(a<c && b<c)
        max=c;
    if(a+b>c && a+c>b && b+c>a){
        if(max==a){
            if((a==b || a==c || c==b) && sqrt(b*b+c*c)==a)
                printf("Moze da se napravi jednakokraki pravougli trougao\n");
            else if(a==b && a==c)
                printf("Moze da se napravi jednakostranicni trougao\n");
            else if(a==b || a==c || c==b)
                printf("Moze da se napravi jednakokraki trougao\n");
            else if(sqrt(b*b+c*c)==a)
                printf("Moze da se napravi pravougli trougao\n");
            else
                printf("Moze da se napravi 'nepravilan' trougao\n");
        }
        else if(max==b){
            if((a==b || a==c || c==b) && sqrt(a*a+c*c)==b)
                printf("Moze da se napravi jednakokraki pravougli trougao\n");
            else if(a==b && a==c)
                printf("Moze da se napravi jednakostranicni trougao\n");
            else if(a==b || a==c || c==b)
                printf("Moze da se napravi jednakokraki trougao\n");
            else if(sqrt(a*a+c*c)==b)
                printf("Moze da se napravi pravougli trougao\n");
            else
                printf("Moze da se napravi 'nepravilan' trougao\n");
        }
        else{
            if((a==b || a==c || c==b) && sqrt(b*b+a*a)==c)
                printf("Moze da se napravi jednakokraki pravougli trougao\n");
            else if(a==b && a==c)
                printf("Moze da se napravi jednakostranicni trougao\n");
            else if(a==b || a==c || c==b)
                printf("Moze da se napravi jednakokraki trougao\n");
            else if(sqrt(b*b+a*a)==c)
                printf("Moze da se napravi pravougli trougao\n");
            else
                printf("Moze da se napravi 'nepravilan' trougao\n");
        }
    }
    else
        printf("Ne moze da se napravi trougao od datih stranica\n");
    system("pause");
}
