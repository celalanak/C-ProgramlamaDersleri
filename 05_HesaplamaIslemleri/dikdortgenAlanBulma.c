#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int dikdortgenKisaKenar, dikdortgenUzunKenar;

    /*printf("K�sa kenar� cm cinsinden girin: ");
    scanf("%d", &dikdortgenKisaKenar);

    printf("Uzun kenar� cm cinsinden girin: ");
    scanf("%d", &dikdortgenUzunKenar);*/

    printf("Dikd�rtegini k�sa ve uzun kenar�n� girin: \n");
    scanf("%d%d", &dikdortgenKisaKenar, &dikdortgenUzunKenar);

    int dikdortgeninAlani;
    dikdortgeninAlani = dikdortgenKisaKenar * dikdortgenUzunKenar;
    printf("Dikd�rtgen alan�: %d cm'dir.", dikdortgeninAlani);

    return 0;
}