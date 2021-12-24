#include <stdio.h>
#include <stdlib.h>

int main () {

int tag;

printf("Bitte geben sie die Tagesnummer: ");
scanf("%d",&tag);

switch (tag)
{
case 1 : printf("Montag    ");
    break;
    case 2 : printf("Dienstag   ");
    break;
    case 3 : printf("Mittwoch   ");
    break;
    case 4 : printf("Donnerstag   ");
    break;
    case 5 : printf("Freitag   ");
    break;
    case 6 : printf("Samstag   ");
    break;
    case 7 : printf("Sonntag   ");
    break;

default:printf("Es gibt nur 7 tagen in der Woche du idiot!!");
    break;
}



}