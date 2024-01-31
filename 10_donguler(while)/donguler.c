#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int i = 0;
    // 0 dýþýnda herhangi bir þey yazýlýrsa true kabul eder, 0 false kabul eder.

    while (i < 10)
    {
        printf("%d. While Döngüsü\n", i + 1);
        i++;
    }

    return 0;
}