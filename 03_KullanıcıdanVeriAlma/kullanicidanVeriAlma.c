#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // scanf fonksiyonu ile yapýlýr

    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    char karakterDizisi[6];

    printf("Lütfen bir deðer giriniz: ");
    scanf("%d", &sayi);

    printf("Kesirli bir sayý giriniz (Deðeri Float olacak): ");
    scanf("%f", &kesirliSayi);

    printf("Kesirli bir sayý giriniz (Deðeri Double olacak): ");
    scanf("%lf", &kesirliSayi2);

    printf("Bir karakter girin: ");
    scanf(" %c", &karakter); // %c baþýnda 1 boþluk olmak zorunda.

    printf("Lütfen bir karakter dizisi girin: ");
    scanf("%s", karakterDizisi); // karakter disizinde & koymak zorunlu deðildir

    printf("Girdiðiniz tam sayý, %d.\n", sayi);
    printf("Girdiðiniz float sayý %.2f.\n", kesirliSayi);
    printf("Girdiðiniz double sayý %.2lf.\n", kesirliSayi2);
    printf("Girdiðiniz karakter %c.\n", karakter);
    printf("Girdiðiniz karakter dizisi %s.\n", karakterDizisi);

    return 0;
}
