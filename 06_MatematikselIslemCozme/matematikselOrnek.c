#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // 47598 say�s�n� aralar�nda 5 birim bo�luk olacak �ekilde yaz�m olacak

    int sayi, birler, onlar, yuzler, binler, onbinler;

    printf("5 basamakl� bir say� giriniz: ");
 
    scanf("%d", &sayi);

    birler = sayi % 10;
    onlar = (sayi % 100) / 10;
    yuzler = (sayi % 1000) / 100;
    binler = (sayi % 10000) / 1000;
    onbinler = sayi / 10000;

    printf("%d     %d     %d     %d     %d", onbinler, binler, yuzler, onlar, birler);

    return 0;
}