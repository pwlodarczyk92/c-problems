// napisz program, ktory przyjmuje jedna liczbe - a
// i zwraca sume wszystkich liczb niepodzielnych przez 3, mniejszych od a
// np dla a=10: wynik = 1 + 2 + 4 + 5 + 7 + 8 = 27

#include <stdio.h>

int main(void) {

	int a;
	printf("podaj a - ");
	scanf("%d", &a);

    int wynik = 0;
    int element = 1;
    
    while(element < a) {
        if (element % 3 != 0) {

    	   wynik = wynik + element;
           
        }
    	element = element + 1;
    }

    printf("wynik = %d\n", wynik);

}