#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi1;

    sayi1 = 5;

    // TOPLAMA

    // sayi1++;
    // sayi1 = sayi1 + 1
    // sayi1 += 1;

    // �IKARTMA

    // sayi1--;
    // sayi1 = sayi1 - 1
    // sayi1 -= 1;

    // �ARPMA

    // sayi1 = sayi1 * 1
    // sayi1 *= 1;

    // B�LME

    // sayi1 = sayi1 / 1
    // sayi1 /= 1;

    // MOD ALMA

    // sayi1 %= 6
    // sayi1 = sayi1 % 6

    printf("%d", sayi1);

    return 0;
}
