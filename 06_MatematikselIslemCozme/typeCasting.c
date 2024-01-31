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

    printf("%.1f", (float)w); // virgülden sonra tek sayý olmasý için .1 yazýldý, w int deðerinin de floata çevirmek için (float) w yazýldý

    return 0;
}