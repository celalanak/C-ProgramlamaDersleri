#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // int => float => double

    int x = 30;
    float y = 30;
    double z = 30;

    printf("int/float : %f\n", x / y);
    printf("int/double : %lf\n", x / z);
    printf("float/double : %f\n\n\n", y / z);

    int w = 5;

    printf("%.1f", (float)w); // virg�lden sonra tek say� olmas� i�in .1 yaz�ld�, w int de�erinin de floata �evirmek i�in (float) w yaz�ld�

    return 0;
}