#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    char islem;

    printf("Bir ��lem se�in: \n");
    scanf("%c", &islem);

    /*switch (islem)
    {
    case '1':
        printf("Toplama ��lemi: ");
        break;
    case '2':
        printf("��kartma ��lemi: ");
        break;
    case '3':
        printf("�arpma ��lemi: ");
        break;

    default:
        printf("Hatal� Se�im\n");
        break;
    }*/

    if (islem == '1')
    {
        printf("Toplama ��lemi: ");
    }

    else if (islem == '2')
    {
        printf("��kartma ��lemi: ");
    }

    else if (islem == '3')
    {
        printf("�arpma ��lemi: ");
    }

    else
    {
        printf("Hatal� Se�im\n");
    }

    return 0;
}