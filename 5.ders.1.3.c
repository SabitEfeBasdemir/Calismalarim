#include <stdio.h>
#include<stdlib.h>

int main () {

int s1,s2,s3,summe;

/*Verilen 3 sayinin ortalamsinin hesaplanmasi*/

printf("Erste Prüfung: ");
scanf("%d",&s1);
printf("Zweite Prüfung; ");
scanf("%d",&s2);
printf("Dritte Prüfung; ");
scanf("%d",&s3);

summe=(s1+s2+s3)/3;
printf("Ihre Ergebnisse: %d",summe);

return 0;

}