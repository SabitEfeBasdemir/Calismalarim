#include <stdio.h>
#include <stdlib.h>

int main () {

char sehir[3][15];

int i;

for ( i = 0; i <3; i++)
{
    printf("Lütfen Sehri Giriniz: ");
    scanf(" %s",sehir[i]);
}
for ( i = 0; i <3; i++)
{
    printf("Girmis oldugunuz sehirler: %s\n" ,sehir[i]);
}
return 0;
    
}