#include <stdio.h>
#include <locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL, "Turkish");

    float cemberinYariCapi, cemberinCevresi;

    printf("Çemberin yarýçapýný girin: ");
    scanf("%f",&cemberinYariCapi);

    cemberinCevresi = 2 * pi * cemberinYariCapi;

    printf("Çemberin çeversi: %f",cemberinCevresi);

    return 0;
}