#include <stdio.h>
#include <locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL, "Turkish");

    float cemberinYariCapi, cemberinCevresi;

    printf("�emberin yar��ap�n� girin: ");
    scanf("%f",&cemberinYariCapi);

    cemberinCevresi = 2 * pi * cemberinYariCapi;

    printf("�emberin �eversi: %f",cemberinCevresi);

    return 0;
}