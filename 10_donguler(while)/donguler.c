#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int i = 0;
    // 0 d���nda herhangi bir �ey yaz�l�rsa true kabul eder, 0 false kabul eder.

    while (i < 10)
    {
        printf("%d. While D�ng�s�\n", i + 1);
        i++;
    }

    return 0;
}