#include <stdlib.h>
#include <stdio.h>

int main () {

int i,summe;

summe=0;

for (i = 1; i <=79; i+=4)
{
    summe=summe+i;
    printf(" %d.Schritt\n",i);
}

printf("\n");
printf("Toplam deger: %d",summe);

return 0;




}