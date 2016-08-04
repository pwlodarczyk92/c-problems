// program ma wczytac od uzytkownika dwie liczby - wspolrzedne uzytkownika na mapie (x i y).
// nastepnie, ma wczytywac od uzykownika znaki - 'a', 'w', 's' i 'd', ktore spowoduja
// przemieszczenie sie uzytkownika o jedna jednostke w danym kierunku.
// po kazdym ruchu, program ma wypisac wspolrzedne uzytkownika.
// po osiagnieciu srodka mapy - wspolrzednych (0, 0),
// nalezy wypisac odpowiednia wiadomosc o osiagnieciu celu i zakonczyc program.
// po wpisaniu 'x', program ma wypisac wiadomosc o przerwaniu programu i zakonczyc program.
// po wpisaniu innego znaku, program ma wypisac wiadomosc o blednym znaku i oczekiwac na dalsze znaki.

#include <stdio.h>

int main(void) {

	int x, y;
	printf("podaj x - ");
	scanf("%d", &x);
	printf("podaj y - ");
	scanf("%d", &y);

	char c;
	int koniec = 0;

	while(!koniec) {
		printf("podaj kierunek - ");
		scanf(" %c", &c);

		if (c == 'a') x = x - 1;
		else if (c == 'd') x = x + 1;
		else if (c == 's') y = y - 1;
		else if (c == 'w') y = y + 1;
		else if (c == 'x') {
			printf("przerwanie programu\n");
			koniec = 1;
		} else {
			printf("bledny symbol\n");
		}

		if (x == 0 && y == 0) {
			printf("cel osiagniety\n");
			koniec = 1;
		} else if (c == 'a' || c == 'w' || c == 's' || c == 'd') {
			printf("obecne wspolrzedne - (%d, %d)\n", x, y);
		}

	}

}