#include <stdio.h>
#include <stdlib.h>

int main () {

int p1,p2,p3,summe;

printf("Geben Sie ihre erste Prüfungsergebnis: ");
scanf("%d",&p1);

printf("Geben Sie ihre zweite Prüfungsergebnis: ");
scanf("%d",&p2);

printf("Geben Sie ihre dritte Prüfungsergebnis: ");
scanf("%d",&p3);

summe=(p1+p2+p3)/3;

if(summe<60)
{
    printf("Ihre Ergebnis ist ff  ");
}
if(summe>=60 && summe<70)
{
    printf("Ihre Ergebnis ist dd  ");
}
if(summe>=70 && summe<80)
{
    printf("Ihre Ergebnis ist cc  ");
}
if(summe>=80 && summe<90)
{
    printf("Ihre Ergebnis ist bb  ");
}
if(summe>=90 && summe<101)
{
     printf("Ihre Ergebnis ist aa  ");
}

return 0;

}