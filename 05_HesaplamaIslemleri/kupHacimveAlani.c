#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    float kupBirKenari, yanalAlanlarinToplami, kupunHacmi;

    printf("K�p kenar� yaz, sana hacmi ve yanal alanlar� s�yleyeyim:");

    scanf("%f", &kupBirKenari);

    yanalAlanlarinToplami = 6 * kupBirKenari * kupBirKenari;
    kupunHacmi = kupBirKenari * kupBirKenari * kupBirKenari;

    printf("K�p�n Yanal alanlar�n toplam�: %.2f\n", yanalAlanlarinToplami);
    printf("K�p�n hacmi: %.2f", kupunHacmi);

    return 0;
}