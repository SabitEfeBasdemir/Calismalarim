#include <stdio.h>
 
 int main()
{
    int sayi1,sayi2;
        int islem;
    
    printf("1.Sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    printf("\n\n1.Toplama\n");
    printf("2.Cikarma\n");
    printf("3.Bolme\n");
    printf("4.Carma\n");
    
    printf("\nIslemi seciniz:");
    scanf("%d",&islem);
    
    if(islem == 1){
        printf("Toplama isleminin sonucu : %d",sayi1 + sayi2);
    }
    else if(islem ==2){
        printf("Cıkarma isleminin sonucu : %d",sayi1 - sayi2);
    }
    else if(islem ==3){
        printf("Bolme isleminin sonucu : %f", (float) sayi1 / (float) sayi2);
    }
    else if(islem ==4){
        printf("Carpma isleminin sonucu : %d", sayi1 * sayi2);
    }
    else{
        printf("Lutfen gecerli bir sayi giriniz..");
    }
}