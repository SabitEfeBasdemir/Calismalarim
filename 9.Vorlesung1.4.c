#include <stdio.h>
#include <stdlib.h>

int main() {

int wasser;

printf("Bitte geben Sie die Grad des Wassers: ");
scanf("%d",&wasser);

if(wasser<=0)
{
    printf("Die Situation des Wassers ist ---> Eis   ");
}
if (wasser>0 && wasser<100)
{
    printf("Die Situation des Wassers ist ---> Liquid   ");
}
if (wasser>100)
{
    printf("Die Situation ded Wassers ist --> Dampf    ");
}


return 0;

}










