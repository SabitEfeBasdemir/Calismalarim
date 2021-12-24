#include <stdio.h>
#include <stdlib.h>

int main () {
int zeile,kolonne,k,i,j,s;

printf("Bitte Geben Sie die Zeile: ");
scanf("%d",&zeile);

printf("Bitte Gene Sie die Kolonne: ");
scanf("%d",&kolonne);

int matris [zeile][kolonne];

for (i = 0; i <zeile; i++)
{
    for (k = 0; k <kolonne; k++)
    {
        printf("\n Degeriniz [%d][%d]---> ",i+1,k+1);
        scanf("%d",&matris[i][k]);
    }
    
}
for ( s = 0; s <zeile; s++)
{
    for ( j = 0; j <kolonne; j++)
    {
        printf(" %d ",matris[s][j]);
    }
    printf("\n");
}

return 0;

}