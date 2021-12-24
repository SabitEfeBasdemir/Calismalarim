#include <stdio.h>
#include <stdlib.h>

int main(){

int s1,s2,ort;

printf("Bitte geben Sie die Erste Zahl: ");
scanf("%d",&s1);

printf("Bitte geben Sie die zweite Zahl: ");
scanf("%d",&s2);

ort=(s1+s2)/2;

printf("Ortalamaniz: %d\n\n",ort);

if(ort>=60)
{
printf("Herzlichen Glückwunsch,Sie haben bestanden!");
}

else
{
    printf("Es tut uns leid,Sie konnten nich bestehen...");
}
return 0;

}
