#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    /*
    setlocale(LC_ALL,"Turkish");
    printf("Hello world!\n\a"); //a alarm anlam�na gelmektedir
    printf("Merhaba\\D�nya\n");
    printf("���i");
    */

    int sayi;
    printf("L�tfen Ya��n�z� Girin: ");
    scanf("%d",&sayi);

    printf("Do�um tarihiniz %d",2024-sayi);




    return 0;
}
