#include <stdio.h>
#include <locale.h>

int main()
{

    // f(x) = ax * ax + bx + c => Denklem ��zme i�lemi yp�lacak

    setlocale(LC_ALL, "Turkish");

    float a, b, c, x, sonuc;

    printf("S�ras�yla a,b,c,x de�erlerini giriniz: \a\n");

    scanf("%f%f%f%f", &a, &b, &c, &x);

    sonuc = a * x * x + b * x + c;
    printf("Denkelminin sonucu %d",(int) sonuc); // type casting olur yani tip d�n���m� denir

    return 0;
}