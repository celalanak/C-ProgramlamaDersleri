#include <stdio.h>
#include <locale.h>

#define pi 3.14

int main()
{
    setlocale(LC_ALL, "Turkish");

    float cemberinYariCapi, cemberinAlani;

    printf("�emberin yar� �ap�n� girin: ");
    scanf("%f", &cemberinYariCapi);

    cemberinAlani = pi * cemberinYariCapi * cemberinYariCapi;
    printf("�emberin Alan�: %.3f", cemberinAlani);

    return 0;
}