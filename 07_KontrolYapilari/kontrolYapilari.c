#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*int yas;

    printf("L�tfen ya��n� yaz: ");
    scanf("%d", &yas);

    if (yas >= 18)
    {
        
        printf("%d ya��nda oldu�unuz i�in ehliyet alabilirsiniz", yas);
    }
    else
    {
        printf("%d ya��nda oldu�unuz i�in ehliyet alamazs�n�z.", yas);
    }?*/


    int puan;

    printf("L�tfen puan�n�z� girin: ");
    scanf("%d",&puan);

/*

80 - 100 �ok iyi
60 - 80 iyi
40 - 60 orta
20 - 40 k�t�
0 - 20 �ok k�t�

*/
    if (puan >= 80)
    {
        printf("�ok iyi");
    }
    
    else if (puan >= 60 && puan < 80)
    {
        printf("�yi");
    }

    else if (puan >= 40 && puan < 60)
    {
        printf("Orta");
    }
    
    else if (puan >= 20 && puan < 40)
    {
        printf("K�t�");
    }

    else
    {
        printf("�ok K�t�");
    }
    
    
    



    return 0;
}