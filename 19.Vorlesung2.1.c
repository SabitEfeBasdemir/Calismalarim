#include <stdio.h>
#include <stdlib.h>

int main () {
int arrays[100];
int i,nummer,add=0,ort=0;

printf("Bitte geben Sie die Elementareszahl: ");
scanf("%d",&nummer);


for (i =0; i <nummer; i++)
{
	printf("Bitte geben Sie die Zahlen für die %d.Felder: ",i+1);
	scanf("%d",&arrays[i]);
}
printf("\n\n");

for ( i = 0; i <nummer; i++)
{
	printf("Die abgegebene Zahl: %d\n",arrays[i]);
}

printf("\n");
for ( i = 0; i <nummer; i++)
{
	add=add+arrays[i];
	ort=(add/nummer);
}

printf("Additions von der Nummer:%d\n",add);
printf("Durchschnittspunkte: %d\n", ort);
return 0;
}