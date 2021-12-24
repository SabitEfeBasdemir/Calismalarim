#include <stdio.h>
#include <stdlib.h>

int main(){

int s1,s2,Summe;

s1=15;
s2=20;
Summe=s1+s2;

if(Summe>=30)
{
    printf("Ihre Summe: %d --- größer als 30",Summe);
}

else
{
    printf("Ihre Summe: %d --- kleiner als 30",Summe);
}

return 0;

}