// napisz program, ktory przyjmuje jedna liczbe - a
// i zwraca sume kwadratow mniejszych od a, 
// np dla a=20: wynik = 1*1 + 2*2 + 3*3 + 4*4 = 30 (bo 5*5 nie jest juz mniejsze od a)
// dla a=36: wynik = 1*1 + 2*2 + 3*3 + 4*4 + 5*5 = 55 (bo 6*6 nie jest juz mniejsze od a)

#include <stdio.h>

int main(void) {

	int a;
	printf("podaj a - ");
	scanf("%d", &a);

    int wynik = 0;
    int element = 1;
    int kwadrat = element*element; // rownie dobrze mogloby byc "int kwadrat = 1;"

    while(kwadrat < a) {
    	wynik = wynik + kwadrat;
    	element = element + 1;
        kwadrat = element * element;
    }

    printf("wynik = %d\n", wynik);

}