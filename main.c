/* bensin.c version 1.3
 * Ber�kning av bensinpris
 */
#include <stdio.h>
int main(void) {
 float literpris, liter, totalpris;
 /* L�s in literpriset */
 printf("Literpris = ");
 scanf("%f", &literpris);
 /* L�s in antalet liter */
 printf("Antal liter = ");
 scanf("%f", &liter);
 /* Ber�kna och skriv ut totalpriset */
 totalpris = literpris * liter;
 printf("Totalpriset f�r bensinen �r %.2f kr.\n", totalpris);
 return 0;
}
