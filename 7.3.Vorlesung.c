#include <stdio.h>
#include <stdlib.h>

int main(){

/*Wie kann man die Kreisfläche und die Kreisumfang mit der Algorithmus berechnen? */

float radius,fläche,umfang,pi;

pi=3.14;

printf("Radius:  ");
scanf("%f",&radius);

umfang=2*pi*radius;
fläche=pi*radius*radius;

printf("Kreisfläche: %f,\n",fläche);
printf("Kreisumfang %f", umfang);

return 0;




}