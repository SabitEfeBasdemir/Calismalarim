#include <stdio.h>
#include <stdlib.h>

int main (){

int buch,rabatt,preis,fazit;

printf("Bitte geben Sie die Buchszahl: ");
scanf("%d",&buch);

preis=buch*25; 

if (buch>=0 && buch<10)
{
    rabatt=preis*1/10;
    fazit=preis-rabatt;
    printf("**Glückwunsch! Sie haben von ihrem Einkauf 10 Prozent Rabatt bekommen**\n  ");
    printf("Preis: *%dEuro*",fazit);
}
if(buch>=10 && buch<15)
{
    rabatt=preis*15/100;
    fazit=preis-rabatt;
    printf("**Glückwunsch! Sie haben von ihrem Einkauf 20 Prozent Rabatt bekommen**\n  ");
    printf("Preis:* %dEuro*",fazit);
}
if (buch>=15 && buch<20)
{
    rabatt=preis*25/100;
    fazit=preis-rabatt;
    printf("**Glückwunsch! Sie haben von ihrem Einkauf 25  Prozent Rabatt bekommen!**\n  ");
    printf("Preis: *%d Euro* ",fazit);
}
if (buch>=20 && buch<30)
{
    rabatt=preis*3/10;
    fazit=preis-rabatt;
    printf("**Glückwunsch! Sie haben von ihrem Einkauf 30 Prozent Rabatt bekommen**\n  ");
    printf("Preis: *%dEuro*",fazit);
}
 
return 0;



}