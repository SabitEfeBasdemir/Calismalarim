#include <stdio.h>
#include <stdlib.h>

int main() {

int n1,n2,add,sub,div,mul;

printf("Geben Sie bitte die Erste Nummer:  ");
scanf("%d,",&n1);

printf("Geben Sie bitte die zweiter Nummer:  ");
scanf("%d",&n2);

add=n1+n2;
mul=n1*n2;
sub=n1-n2;
div=n1/n2;

printf("Addition: %d\n",add);
printf("Multiplikation: %d\n", mul);
printf("Substraktion: %d\n",sub);
printf("Divition: %d",div);


return 0 ;


}