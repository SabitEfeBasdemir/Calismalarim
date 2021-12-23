#include <stdlib.h>
#include <stdio.h>

int main() {

    char kitapadi[10],yazar[20],sayfasayisi[3],basimtarihi[5],yayinevi[10],türü[10];
    printf("Kitap Adi:  ");
    scanf("%s",kitapadi);

    printf("Yazar Adi:  ");
    scanf("%s",yazar);

    printf("Sayfa Sayisi:  ");
    scanf("%s",sayfasayisi);

    printf("Basim Tarihi:   ");
    scanf("%s", basimtarihi);

    printf("Yayinevi:  ");
    scanf("%s", yayinevi);

    printf("Kitap Türü:  ");
    scanf("%s",türü);

    printf("Kitap: %s\n",kitapadi);
    printf("Yazar: %s\n",yazar);
    printf("Yaprak: %s\n",sayfasayisi);
    printf("Basim Yili: %s\n",basimtarihi);
    printf("Yainevi: %s\n",yayinevi);
    printf("Kitap Tarzi: %s",türü);

return 0;
}