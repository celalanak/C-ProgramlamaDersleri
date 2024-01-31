#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    /*
    setlocale(LC_ALL,"Turkish");
    printf("Hello world!\n\a"); //a alarm anlamýna gelmektedir
    printf("Merhaba\\Dünya\n");
    printf("çöþi");
    */

    int sayi;
    printf("Lütfen Yaþýnýzý Girin: ");
    scanf("%d",&sayi);

    printf("Doðum tarihiniz %d",2024-sayi);




    return 0;
}
