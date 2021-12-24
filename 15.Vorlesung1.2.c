#include <stdio.h>
#include <stdlib.h>

int main () {

char vorlesung;

printf("Bitte geben Sie die Vorlesungscode:  ");
scanf("%s",&vorlesung);

switch (vorlesung)
{
case 't': printf ("Türkisch");
    break;
    case 'm': printf ("Mathematik");
    break;
    case 'n': printf ("Naturwissenschaften");
    break;
    case 'p': printf ("Philiopsophie");
    break;
    case 'r': printf ("Religionsgeschichte");
    break;
    case 's': printf ("Sportwissenschaft");
    break;
    case 'g': printf ("Geschichte");
    break;
    case 'e': printf ("Englisch");
    break;

default: printf("Die Abgegebene Code ist leider nicht verfügbar. ");
    break;
}






}