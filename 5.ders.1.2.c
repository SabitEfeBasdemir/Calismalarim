#include <stdio.h>
#include <stdlib.h>


int main () {

int seite,fläche,umfang;

/*Karenin alan ve cevre hesaplamasi*/

printf("Umfang und Fläche einer Quadrat \n\n");

printf("Geben Sie bitte die Seite:  ");
scanf("%d",&seite);

fläche=seite*seite;
umfang=seite*4;

printf("Fläche: %d\n",fläche);
printf("Umfang: %d",umfang);

return 0 ;





}


