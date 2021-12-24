#include <stdio.h>
#include <stdlib.h>

int main() {

float preis,minute,zeit;
printf("Bitte bezeichnen Sie,Wieviele Stunde Sie einparken werden: ");
scanf("%f",&zeit);



if(zeit>=1 && zeit<2)
{
    preis=zeit*1.25;
    printf("Ihre Preis: %f Euro",preis);
}
if (zeit>=2 && zeit<5)
{
    preis=zeit*2.75;
    printf("Ihre Preis: %f Euro ",preis);
}
if (zeit>=5 && zeit<10)
{
    preis=zeit*5;
    printf("Ihre Preis: %f Euro ",preis);
}

return 0 ;


}