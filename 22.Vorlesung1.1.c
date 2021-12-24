#include <stdio.h>
#include <stdlib.h>

int main (){

int i,k,en,boy;

printf("Lütfen En Degerini Giriniz: ");
scanf("%d",&en);

printf("Lütfen Boy Degerini Giriniz: ");
scanf("%d",&boy);

for ( i =1 ; i <=boy; i++)
{
    for ( k =1; k<=en; k++)
    {
        printf("*");
    }
    printf("\n");
}
return  0;
}