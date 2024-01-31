#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    float kupBirKenari, yanalAlanlarinToplami, kupunHacmi;

    printf("Küp kenarý yaz, sana hacmi ve yanal alanlarý söyleyeyim:");

    scanf("%f", &kupBirKenari);

    yanalAlanlarinToplami = 6 * kupBirKenari * kupBirKenari;
    kupunHacmi = kupBirKenari * kupBirKenari * kupBirKenari;

    printf("Küpün Yanal alanlarýn toplamý: %.2f\n", yanalAlanlarinToplami);
    printf("Küpün hacmi: %.2f", kupunHacmi);

    return 0;
}