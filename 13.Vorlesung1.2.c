#include <stdio.h>
#include <stdlib.h>

int main() {

int sayi,birler,onlar,yüzler;

sayi=512;




yüzler=sayi/100;
printf(" Yüzler Basamagi: %d\n",yüzler);

onlar=sayi/10;
onlar=onlar%10;
printf(" Onlar Basamagi: %d\n",onlar);

birler=sayi%10;
printf(" Birler Basamagi: %d    "   ,birler);

return 0;

}