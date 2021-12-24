#include <stdio.h>
#include <stdlib.h>

int main () {

int i,n;
int fakultät=1;

printf("Faktöryelinin bulunmasi istenilen sayiyi giriniz");
scanf("%d",&n);

for ( i = 1; i <=n; i++)
{
    fakultät=fakultät*i;
    printf(" %d.Schritt  %d\n",i,fakultät);
}

return 0;


}