#include <stdio.h>

int main()
{
	int i, s = 0, m, d;
	char o;
	printf("Unesite redni broj meseca: "); scanf("%d", &m);
	printf("Unesite redni broj dana: "); scanf("%d", &d);
	for(i = 1; i <= m; i++){
		if(i == m){
			s += d;
			break;
		}
		switch(i){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				s += 31; 
				break;
			case 4: case 6: case 9: case 11:
				s += 30;
				break;
			case 2:
				printf("Da li je prestupna godina? d/n\n");
				fflush(stdin);
				scanf("%c", &o);
				if(o == 'd') s += 28;
				else s += 29;
				break;
		}
	}
	printf("Redni broj dana u godini je: %d", s);
	return 0;
}
