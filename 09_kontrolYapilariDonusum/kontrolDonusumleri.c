#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    char islem;

    printf("Bir Ýþlem seçin: \n");
    scanf("%c", &islem);

    /*switch (islem)
    {
    case '1':
        printf("Toplama Ýþlemi: ");
        break;
    case '2':
        printf("Çýkartma Ýþlemi: ");
        break;
    case '3':
        printf("Çarpma Ýþlemi: ");
        break;

    default:
        printf("Hatalý Seçim\n");
        break;
    }*/

    if (islem == '1')
    {
        printf("Toplama Ýþlemi: ");
    }

    else if (islem == '2')
    {
        printf("Çýkartma Ýþlemi: ");
    }

    else if (islem == '3')
    {
        printf("Çarpma Ýþlemi: ");
    }

    else
    {
        printf("Hatalý Seçim\n");
    }

    return 0;
}