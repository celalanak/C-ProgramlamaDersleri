#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*int yas;

    printf("Lütfen yaþýný yaz: ");
    scanf("%d", &yas);

    if (yas >= 18)
    {
        
        printf("%d yaþýnda olduðunuz için ehliyet alabilirsiniz", yas);
    }
    else
    {
        printf("%d yaþýnda olduðunuz için ehliyet alamazsýnýz.", yas);
    }?*/


    int puan;

    printf("Lütfen puanýnýzý girin: ");
    scanf("%d",&puan);

/*

80 - 100 çok iyi
60 - 80 iyi
40 - 60 orta
20 - 40 kötü
0 - 20 çok kötü

*/
    if (puan >= 80)
    {
        printf("Çok iyi");
    }
    
    else if (puan >= 60 && puan < 80)
    {
        printf("Ýyi");
    }

    else if (puan >= 40 && puan < 60)
    {
        printf("Orta");
    }
    
    else if (puan >= 20 && puan < 40)
    {
        printf("Kötü");
    }

    else
    {
        printf("Çok Kötü");
    }
    
    
    



    return 0;
}