#include <stdio.h>
#include <stdlib.h>

int main() {

int zahl;
printf("Bitte geben Sie die Zahl: ");
scanf("%d",&zahl);
if(zahl%2==0)
{
    printf("Die Zhal ist gerade");
}
else
{
    printf("Die Zahl ist ungerade");
}

return 0;


}
