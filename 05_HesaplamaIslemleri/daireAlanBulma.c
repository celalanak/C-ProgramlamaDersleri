#include <stdio.h>
#include <locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL, "Turkish");

    float cemberinYariCapi, cemberinAlani;

    printf("Çemberin yarý çapýný girin: ");
    scanf("%f", &cemberinYariCapi);

    cemberinAlani = pi * cemberinYariCapi * cemberinYariCapi;
    printf("Çemberin Alaný: %.3f", cemberinAlani);

    return 0;
}