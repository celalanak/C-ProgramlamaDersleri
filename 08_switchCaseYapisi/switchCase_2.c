#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    char karaktereGore;

    printf("Karakter giriniz:\n");
    scanf("%c", &karaktereGore);

    switch (karaktereGore)
    {
    case '�':
        printf("� se�tiniz, oluyor."); // t�rk�e karakterlerde ��kt� vermemez, ingilizce kullan.
        break;
    case 'c':
        printf("c zaten oluyor");
        break;
    case 'h':
        printf("Hatice geldi");
        break;

    default:
        printf("Tan�nm�yor");
        break;
    }

    printf("��lem tamamland�r.");
    return 0;
}