#include <stdio.h>
#include <stdlib.h>

int main () {

int nummer[]={15,25,100,24,55,15,12};
int summe=0;
int i;

for ( i = 0; i <7; i++)
{
    summe=summe+nummer[i];
}
printf("Summe: %d",summe);


return 0;



}