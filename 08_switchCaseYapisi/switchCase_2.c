#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    char karaktereGore;

    printf("Karakter giriniz:\n");
    scanf("%c", &karaktereGore);

    switch (karaktereGore)
    {
    case 'ç':
        printf("Ç seçtiniz, oluyor."); // türkçe karakterlerde çýktý vermemez, ingilizce kullan.
        break;
    case 'c':
        printf("c zaten oluyor");
        break;
    case 'h':
        printf("Hatice geldi");
        break;

    default:
        printf("Tanýnmýyor");
        break;
    }

    printf("Ýþlem tamamlandýr.");
    return 0;
}