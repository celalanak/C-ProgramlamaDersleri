#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // scanf fonksiyonu ile yap�l�r

    int sayi;
    float kesirliSayi;
    double kesirliSayi2;
    char karakter;
    char karakterDizisi[6];

    printf("L�tfen bir de�er giriniz: ");
    scanf("%d", &sayi);

    printf("Kesirli bir say� giriniz (De�eri Float olacak): ");
    scanf("%f", &kesirliSayi);

    printf("Kesirli bir say� giriniz (De�eri Double olacak): ");
    scanf("%lf", &kesirliSayi2);

    printf("Bir karakter girin: ");
    scanf(" %c", &karakter); // %c ba��nda 1 bo�luk olmak zorunda.

    printf("L�tfen bir karakter dizisi girin: ");
    scanf("%s", karakterDizisi); // karakter disizinde & koymak zorunlu de�ildir

    printf("Girdi�iniz tam say�, %d.\n", sayi);
    printf("Girdi�iniz float say� %.2f.\n", kesirliSayi);
    printf("Girdi�iniz double say� %.2lf.\n", kesirliSayi2);
    printf("Girdi�iniz karakter %c.\n", karakter);
    printf("Girdi�iniz karakter dizisi %s.\n", karakterDizisi);

    return 0;
}
