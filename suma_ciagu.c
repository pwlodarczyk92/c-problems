// napisz program, ktory przyjmuje 2 liczby - a i b
// i zwraca sume wszystkich liczb od a do b włącznie
// np dla a=3 i b=6: wynik = 3 + 4 + 5 + 6 = 18 

#include <stdio.h>

int main(void) {

	int a, b;
	printf("podaj a - ");
	scanf("%d", &a);
	printf("podaj b - ");
	scanf("%d", &b);

    int wynik = 0;
    int element = a;

    while(element <= b) {
    	wynik = wynik + element;
    	element = element + 1;
    }

    printf("wynik = %d\n", wynik);

}