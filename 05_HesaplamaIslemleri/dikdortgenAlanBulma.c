#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int dikdortgenKisaKenar, dikdortgenUzunKenar;

    /*printf("Kýsa kenarý cm cinsinden girin: ");
    scanf("%d", &dikdortgenKisaKenar);

    printf("Uzun kenarý cm cinsinden girin: ");
    scanf("%d", &dikdortgenUzunKenar);*/

    printf("Dikdörtegini kýsa ve uzun kenarýný girin: \n");
    scanf("%d%d", &dikdortgenKisaKenar, &dikdortgenUzunKenar);

    int dikdortgeninAlani;
    dikdortgeninAlani = dikdortgenKisaKenar * dikdortgenUzunKenar;
    printf("Dikdörtgen alaný: %d cm'dir.", dikdortgeninAlani);

    return 0;
}