#include <stdio.h>
#include <stdlib.h>

int main() {

int zahl;

printf("Bitte geben Sie die Zahl: ");
scanf("%d",&zahl);

if(zahl%3==0 || zahl%5==0  || zahl%7==0)
{
    printf("Die Zahl kann durch 3 und 5 geteilt werden ");
}
else
{
        printf("Die Zahl kann nicht durch 3 und 5 geteilt werden ");

}

return 0;


}