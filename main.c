/* bensin.c version 1.3
 * Beräkning av bensinpris
 */
#include <stdio.h>
int main(void) {
 float literpris, liter, totalpris;
 /* Läs in literpriset */
 printf("Literpris = ");
 scanf("%f", &literpris);
 /* Läs in antalet liter */
 printf("Antal liter = ");
 scanf("%f", &liter);
 /* Beräkna och skriv ut totalpriset */
 totalpris = literpris * liter;
 printf("Totalpriset för bensinen är %.2f kr.\n", totalpris);
 return 0;
}
