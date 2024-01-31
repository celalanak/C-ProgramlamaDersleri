#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // 47598 sayýsýný aralarýnda 5 birim boþluk olacak þekilde yazým olacak

    int sayi, birler, onlar, yuzler, binler, onbinler;

    printf("5 basamaklý bir sayý giriniz: ");
 
    scanf("%d", &sayi);

    birler = sayi % 10;
    onlar = (sayi % 100) / 10;
    yuzler = (sayi % 1000) / 100;
    binler = (sayi % 10000) / 1000;
    onbinler = sayi / 10000;

    printf("%d     %d     %d     %d     %d", onbinler, binler, yuzler, onlar, birler);

    return 0;
}