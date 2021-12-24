#include <stdio.h>
#include <stdlib.h>

int main () {

int nummer;

printf("Bitte geben Sie die Monantsnummer: ");
scanf("%d",&nummer);

switch(nummer)
{
case 1:printf("Januar ");
    break;
case 2:printf("Februar ");
    break;
case 3:printf("März ");
    break;
case 4:printf("April ");
    break;
case 5:printf("Mai ");
    break;
case 6:printf("Juni ");
    break;
case 7:printf("Juli ");
    break;
case 8:printf("August ");
    break;
case 9:printf("September ");
    break;
case 10:printf("Oktober ");
    break;
case 11:printf("November ");
    break;
case 12:printf("Dezember ");
    break;

default: printf("Sin Sie geistige Behindert oder was? Es gibt nur 12 Monaten... ");
    break;
}


return 0;



}