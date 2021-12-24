#include <stdio.h>
#include <stdlib.h>

int main () {

int nummer[]={1,2,3,4,5,6,7,8,9};
int gegebendezahl,fakültät;
int i;

fakültät=1; 

printf("Bitte geben Sie die Zahl zwischen 1-9: ");
scanf("%d",&gegebendezahl);

for ( i = 0; i<gegebendezahl; i++)
{
    fakültät=fakültät*nummer[i];
}
printf("%d",fakültät);


return 0;


}