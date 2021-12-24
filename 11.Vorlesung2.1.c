#include <stdlib.h>
#include <stdio.h>

int main () {

int i,erstenummer,zweitenummer,gegebenenummer,vorherigenummer,sayac;

erstenummer=1;
zweitenummer=1;

printf("Bitte geben Sie eine Zahl: ");
scanf("%d",&gegebenenummer);
printf("Sayinin Fibonacci dizisi: %d\n",erstenummer);
printf("Sayinin Fibonacci dizisi: %d\n",zweitenummer);

for (i = 3; i <=gegebenenummer; i++)
{
    vorherigenummer=erstenummer+zweitenummer;
    zweitenummer=erstenummer;
    zweitenummer=vorherigenummer;
    printf("Sayinin Fibonacci dizisi: %d\n\n",vorherigenummer);
    

}


return 0;




}