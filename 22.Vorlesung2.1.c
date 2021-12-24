#include<stdio.h>
#include<stdlib.h>

int main(){

int i,k,taban;

printf("Lütfen Taban Degerini Giriniz: ");
scanf("%d",&taban);

for (i = 1; i <=taban-i; i++)
{
    for (k = 1; k <=taban-i; k++)
    {
        printf(" ");
    }
    for ( k = 1; k <=i; k++)
    {
        printf(" *");
    }
    printf("\n");
    
}


return 0;

}
		