#include <stdio.h>

void wypisz(char * tablica, int i){
 if (tablica[i] == '\0') return;
wypisz(tablica,++i);
printf("%c", tablica[--i]);
}


int main(void) {

	char BUFOR[100];
	scanf("%s",BUFOR);
	wypisz(BUFOR, 0);
	printf("\n");

	return 0;
}
