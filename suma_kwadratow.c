// napisz program, ktory przyjmuje jedna liczbe - a
// i zwraca sume kwadratow wszystkich liczb naturalnych 
// mniejszych od a, np dla a=4: wynik = 1*1 + 2*2 + 3*3 = 14 

#include <stdio.h>

int main(void) {

	int a;
	printf("podaj a - ");
	scanf("%d", &a);

    int wynik = 0;
    int element = 1;

    while(element < a) {
    	wynik = wynik + element * element;
    	element = element + 1;
    }

    printf("wynik = %d\n", wynik);

}