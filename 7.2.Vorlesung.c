#include <stdio.h>
#include <stdlib.h>

int main (){
/* Wie wird das neues Gehalt,wenn das altes Gehalt sich 15% erhöht? */

float ag,ng;

printf("Geben Sie bitte ihres  Gehalt: ");
scanf("%f",&ag);

ng=ag*15/100+ag;

printf("Ihres neues Gehalt: %f",ng);

return 0;




}