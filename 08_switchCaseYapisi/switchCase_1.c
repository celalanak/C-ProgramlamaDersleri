#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int secim;

    printf("L�tfen se�im yap�n�z: \n");
    printf("1.�lkbahar\n2.Yaz\n3.Sonbahar\n4.K��\n\n");

    scanf("%d", &secim);

    switch (secim)
    {

    case 1:
        printf("Hava �ok g�zel.");
        break;
    case 2:
        printf("Hava �ok s�cak.");
        break;
    case 3:
        printf("Hava Ya�murlu.");
        break;
    case 4:
        printf("Hava karl�.");
        break;
        
    default:
        printf("1 - 4 aras�nda se�im yapman�z gerekmektedir.");
        break;
    }

    return 0;
}