#include <stdio.h>
#include <locale.h>

int main()
{

    // f(x) = ax * ax + bx + c => Denklem çözme iþlemi ypýlacak

    setlocale(LC_ALL, "Turkish");

    float a, b, c, x, sonuc;

    printf("Sýrasýyla a,b,c,x deðerlerini giriniz: \a\n");

    scanf("%f%f%f%f", &a, &b, &c, &x);

    sonuc = a * x * x + b * x + c;
    printf("Denkelminin sonucu %d",(int) sonuc); // type casting olur yani tip dönüþümü denir

    return 0;
}