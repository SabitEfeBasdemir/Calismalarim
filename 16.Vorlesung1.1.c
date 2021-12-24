#include <stdio.h>
#include <stdlib.h>

int main () {

int s1,s2,secim,sonuc;

printf("Lütfen ilk sayiyi giriniz: ");
scanf("%d",&s1);
printf("Lütfen ikinci sayiyi giriniz: ");
scanf("%d",&s2);

printf("                Matematik Menüsü\n");
printf(" 1- Karede alan ve cevre hesabi\n");
printf(" 2- Girilen Sayilarin Küpü\n");
printf(" 3- Dairede alan ve cevre hesabi\n");
printf(" 4- Dikdörtgende alan ve cevre hesabi\n");
printf(" 5- Girilen sayilarin carpiminin karesi\n");
printf("Lütfen yapmak istediginiz islemin numarasini giriniz ");
scanf("%d",&secim);

switch (secim)
{
case 1 :printf("Karenin Alani: %d\n",(s1*s1));
        printf("Karenin Cevresi: %d",(s1*4));
    break;
case 2 :printf("1.Sayinin Küpü: %d\n",(s1*s1*s1));
        printf("2.Sayinin Küpü: %d",s2*s2*s2);
    break;
case 3 :printf("Dairenin Alani: %d\n",(s1*3*s1));
        printf("Dairenin Cevresi: %d",(6*s1));
    break;
case 4 :printf("Dikdörtgenin Alani: %d\n",(s1*s2));
        printf("Dikdörtgenin Cevresi: %d",((s1+s2)*4));
    break;
case 5 :printf("Girilen Sayilarin caripimlarinin karesi: %d",((s1*s2)*(s1*s2)));
    break;

default: printf("Girmis oldugunuz islem numarasi maalesef gecersizdir,lütfen kontrol ediniz.");
    break;
}

return 0;
}