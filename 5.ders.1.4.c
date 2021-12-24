#include <stdio.h>
#include <stdlib.h>

int main() {

int icetea,popcorn,taco,summe;

/*Sinema gisesindeki  kazik alisveris*/

printf("Stück von ice-tea: ");
scanf("%d",&icetea);

printf("Stück von Popcorn: ");
scanf("%d",&popcorn);

printf("Stück von taco; ");
scanf("%d",&taco);

summe=icetea*5+popcorn*7+taco*10;

printf("Ihre Rechnung %d",summe);

return 0;

}