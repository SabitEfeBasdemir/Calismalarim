#include<stdio.h>
#include<stdlib.h>

int main() {
int matris[2][3]={10,20,30,40,50,60};
int i,k;

for (i = 0; i <2; i++)
{
    for ( k = 0; k<3; k++)
    {
        printf(" %d ",matris[i][k]);
    }
    printf("\n");
}
return 0;
}
