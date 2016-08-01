// napisz program, ktory przyjmuje jedna liczbe - a
// i wypisuje linijki zawierajace liczbe gwiazdek taka, jak kolejne liczby niepodzielne przez 3, mniejsze od a
// np dla a=10: 
// *
// **
// ****
// *****
// *******
// ********


#include <stdio.h>

int main(void) {

	int a;
	printf("podaj a - ");
	scanf("%d", &a);

    int element = 1;
    
    while(element < a) {
        if (element % 3 != 0) {

            //program jest skonstruowany tak samo, jak suma_niepodzielnych
            //jedynie zamiast dodawania elementu do wyniku w tym miejscu, 
            //wypisywany jest na ekranie rząd gwiazdek zawierający tyle gwiazdek, ile wynosi element

            int pozostale_gwiazdki = element;
            while (pozostale_gwiazdki > 0) {
                printf("*");
                pozostale_gwiazdki = pozostale_gwiazdki - 1;
            }
            printf("\n");
            
        }
    	element = element + 1;
    }


}